#include <iostream>
#include <vector>
using namespace std;

// Function to generate a good permutation
vector<int> generateGoodPermutation(int N, int K) {
    // If K == N, no good permutation exists
    if (K == N) return {-1};

    vector<int> P(N);
    // Generate the permutation using a cyclic shift
    for (int i = 0; i < N; i++) {
        P[i] = (i + K) % N + 1;
    }
    return P;
}

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<int> result = generateGoodPermutation(N, K);

        if (result[0] == -1) {
            cout << -1 << endl; // No good permutation
        } else {
            for (int num : result) {
                cout << num << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
