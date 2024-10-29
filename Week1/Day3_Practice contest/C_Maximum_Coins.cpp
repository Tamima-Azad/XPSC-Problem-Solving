#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int s = 0,ss=0;
        for (int i = n - x + 1; i <= n; i++) {
            s +=pow(2,i);
        }
        for (int i = 1; i <= n - x; i++) {
            ss += pow(2,i); 
        }
        cout << s-ss << endl;
    }
    return 0;
}
