#include<bits/stdc++.h>
using namespace std;
long long calculateSum(long long u, long long N) {
    long long sum = 0;
    for (long long i = 0; i < N && u > 0; ++i) {
        sum += u;
        u /= 2;
    }
    return sum;
}
long long findStartingNode(long long X, long long N) {
    long long low = 1, high = 1e18, answer = -1;

    while (low <= high) {
        long long mid = low + (high - low) / 2;
        long long sum = calculateSum(mid, N);

        if (sum == X) {
            return mid; 
        } else if (sum < X) {
            low = mid + 1; 
        } else {
            high = mid - 1;
        }
    }
    return -1; 
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long X, N;
        cin >> X >> N;
        cout << findStartingNode(X, N) << endl;
    }
    return 0;
}
