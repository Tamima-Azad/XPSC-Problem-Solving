#include <iostream>
#include <string>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int N, X, K;
        cin >> N >> X >> K;
        string S;
        cin >> S;

        // Calculate total inversions
        long long total_inversions = 0;
        long long count_ones = 0;

        for (char c : S) {
            if (c == '1') {
                count_ones++;
            } else if (c == '0') {
                total_inversions += count_ones;
            }
        }

        // Check if it's impossible to remove the string
        if (total_inversions % K != 0) {
            cout << "-1" << endl;
            continue;
        }

        // Calculate the minimum number of operations
        long long required_operations = (total_inversions / K + X - 1) / X; // Ceiling division
        cout << required_operations << endl;
    }

    return 0;
}
