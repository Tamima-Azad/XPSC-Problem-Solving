#include <iostream>
#include <vector>
using namespace std;

// Function to solve the problem for multiple test cases
void solve() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n; // Size of the array
        vector<long long> a(n);
        
        long long totalSum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            totalSum += a[i];
        }

        // Check if the total sum is divisible by n
        if (totalSum % n != 0) {
            cout << "NO" << endl;
            continue;
        }

        long long target = totalSum / n; // Target value for each element
        vector<long long> prefix(n, 0);

        // Calculate the prefix surplus/deficit
        prefix[0] = a[0] - target; // Surplus or deficit for the first element
        bool possible = true;
        for (int i = 1; i < n; ++i) {
            prefix[i] = prefix[i - 1] + (a[i] - target);
            // If any prefix sum is negative, redistribution is impossible
            if (prefix[i] < 0) {
                possible = false;
                break;
            }
        }

        if (possible && prefix[n - 1] == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
