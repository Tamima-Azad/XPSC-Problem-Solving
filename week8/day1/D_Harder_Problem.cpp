#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        vector<int> freq(n + 1, 0); // Frequency array for elements 1 to n
        queue<int> available;

        // Initialize the available numbers (1 to n)
        for (int i = 1; i <= n; ++i) {
            available.push(i);
        }

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < n; ++i) {
            if (freq[a[i]] == 0) {
                // If this value hasn't been used yet, place it directly in b
                b[i] = a[i];
                freq[a[i]]++;
                available.pop();
            } else {
                // Use the smallest available number to maintain validity
                while (freq[available.front()] > 0) {
                    available.pop();
                }
                b[i] = available.front();
                freq[b[i]]++;
                available.pop();
            }
        }

        for (int i = 0; i < n; ++i) {
            cout << b[i] << " ";
        }
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}
