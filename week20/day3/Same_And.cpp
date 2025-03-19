#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long N, M;
    cin >> N >> M;
    vector<long long> sequence;
    
    // Finding all numbers in range [0, M] that satisfy the condition X & Y = N
    for (long long i = N; i <= M; i++) {
        if ((i & N) == N) {
            sequence.push_back(i);
        }
    }
    
    // If no valid sequence is found
    if (sequence.size() < 2) {
        cout << -1 << endl;
        return;
    }
    
    // Output the longest sequence found
    cout << sequence.size() << endl;
    sort(sequence.rbegin(),sequence.rend());
    for (long long num : sequence) {
        cout << num << " ";
    }
    cout << endl;

}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
