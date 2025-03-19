#include <iostream>
using namespace std;

void solve() {
    int X, Y;
    cin >> X >> Y;
    
    // Compute the minimum possible transitions
    int result = 2 * min(X, Y) + max(abs(X - Y)*2-1,0);
    
    cout << result << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
