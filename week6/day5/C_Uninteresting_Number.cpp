#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool canMakeDivisibleBy9(const string& n) {
    int sum = 0;

    // Compute the sum of digits modulo 9
    for (char c : n) {
        sum += (c - '0');
    }
    sum %= 9;

    // If the sum is already divisible by 9, return true
    if (sum == 0) return true;

    // Collect valid transformations (valid deltas)
    vector<int> valid_deltas;
    for (char c : n) {
        int original_digit = c - '0';
        int squared_digit = original_digit * original_digit;
        if (squared_digit < 10) { // Only include valid transformations
            valid_deltas.push_back(squared_digit - original_digit);
        }
    }

    // Try adding each valid delta to the sum and check if the result is divisible by 9
    for (int delta : valid_deltas) {
        if ((sum + delta) % 9 == 0) {
            return true;
        }
    }

    // Try combinations of two deltas if necessary
    for (int i = 0; i < valid_deltas.size(); ++i) {
        for (int j = i + 1; j < valid_deltas.size(); ++j) {
            if ((sum + valid_deltas[i] + valid_deltas[j]) % 9 == 0) {
                return true;
            }
        }
    }

    // If no valid transformation is found, return false
    return false;
}

void solve() {
    string n;
    cin >> n; // Read the number as a string

    if (canMakeDivisibleBy9(n)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        solve();
    }

    return 0;
}
