#include <iostream>
#include <cmath>
using namespace std;

typedef long long ll;

ll countPairs(ll k, ll l1, ll r1, ll l2, ll r2) {
    ll count = 0;
    for (ll x = l1; x <= r1; ++x) {
        ll y = x;
        while (true) {
            if (y >= l2 && y <= r2) count++;
            if (y > r2 / k || y > r2) break; // Avoid overflow
            y *= k;
        }
    }
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        ll k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;
        cout << countPairs(k, l1, r1, l2, r2) << "\n";
    }

    return 0;
}
