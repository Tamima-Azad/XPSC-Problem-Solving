#include <iostream>
#include <string>
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;

    int operations = 0; // To store the total number of operations needed
    int i = 0,z=0;

    while (i < n) {
        if (s[i] == '0') {
            z++;
            // Find the end of the current weak segment
            int j = i;
            while (j < n && s[j] == '0') {
                j++;
            }

            // Length of the weak segment
            int length = j - i;

            // If the segment's length is at least m, we need to fix it
            if (length >= m) {
                operations += (length + k - 1) /k; // Minimum number of operations
            }

            // Move to the next segment after the current weak segment
            i = j;
        } else {
            // Move to the next character
            i++;
        }
    }

    cout << operations << endl;
}

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        solve();
    }
    return 0;
}
