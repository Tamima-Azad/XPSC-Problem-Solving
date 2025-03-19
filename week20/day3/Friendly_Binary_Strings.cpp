#include <bits/stdc++.h>
using namespace std;

// Function to check if a given string is a palindrome
bool isPalindrome(string &s) {
    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - 1 - i]) return false;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    string A, B;
    cin >> A >> B;

    // If both A and B are already palindromes, return YES
    if (isPalindrome(A) && isPalindrome(B)) {
        cout << "YES\n";
        return;
    }

    // Count the number of '0's and '1's in both strings
    vector<int> freq(2, 0);
    for (int i = 0; i < n; i++) {
        freq[A[i] - '0']++;
        freq[B[i] - '0']++;
    }

    // Checking mirror positions in A and B
    vector<pair<char, char>> mismatchedPairs;
    for (int i = 0; i < n / 2; i++) {
        char aLeft = A[i], aRight = A[n - 1 - i];
        char bLeft = B[i], bRight = B[n - 1 - i];

        // If these positions do not form a palindrome, record the mismatch
        if (aLeft != aRight || bLeft != bRight) {
            mismatchedPairs.push_back({aLeft, aRight});
            mismatchedPairs.push_back({bLeft, bRight});
        }
    }

    // If the mismatched pairs count is odd, it's impossible to fix
    if (mismatchedPairs.size() % 2 != 0) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
