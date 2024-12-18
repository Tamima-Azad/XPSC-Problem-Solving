#include<bits/stdc++.h>
using namespace std;

bool is_almost_alternating(const string& s) {
    int n = s.length();

    // Check if already alternating
    bool is_alternating = true;
    for (int i = 1; i < n; ++i) {
        if (s[i] == s[i - 1]) {
            is_alternating = false;
            break;
        }
    }
    if (is_alternating) return true;

    // Check if we can make it alternating by reversing a substring
    for (int l = 0; l < n; ++l) {
        for (int r = l; r < n; ++r) {
            string reversed = s;
            reverse(reversed.begin() + l, reversed.begin() + r + 1);

            bool is_valid = true;
            for (int i = 1; i < n; ++i) {
                if (reversed[i] == reversed[i - 1]) {
                    is_valid = false;
                    break;
                }
            }

            if (is_valid) return true;
        }
    }

    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (is_almost_alternating(s)) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}
