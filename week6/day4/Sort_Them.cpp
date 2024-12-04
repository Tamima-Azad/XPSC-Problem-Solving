#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--) {
        ll n, x;
        cin >> n >> x;
        
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        vector<pair<ll, ll>> v;
        for (int i = 0; i < n; i++) {
            v.push_back({a[i], b[i]});
        }

        sort(v.begin(), v.end(), [&](pair<int, int> a, pair<int, int> b) {
            return a.first * a.second > b.first * b.second;
        });

        ll total = 0;
        ll ans = 0;
        for (auto [coin, poriman] : v) {
            if (total >= x) break;
            total += coin * poriman;
            ans++;
        }

        if (total < x) cout << -1 << endl;
        else cout << ans << endl;
    }

    return 0;
}