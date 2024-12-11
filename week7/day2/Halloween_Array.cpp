#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
using namespace std;
#define getbit(n, i) (((n) & (1LL << (i))) != 0) 
#define setbit0(n, i) ((n) & (~(1LL << (i)))) 
#define setbit1(n, i) ((n) | (1LL << (i))) 
#define togglebit(n, i) ((n) ^ (1LL << (i))) 
#define lastone(n) ((n) & (-(n))) 
char gap = 32;
#define int long long
#define ll long long 
#define lll __int128_t
#define pb push_back
typedef tree<
int,
null_type,
less<int>,
rb_tree_tag,
tree_order_statistics_node_update>
ordered_set;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
ll hashPrime = 1610612741;
const ll MOD = 1e9 + 7;
void solve() {
        ll n, l, r; cin >> n >> l >> r;
        ll arr[n];
        for (auto &u : arr) cin >> u; 
        sort(arr, arr+n);

        for (ll i = 1; i < n; i++) {
            if (arr[i] == arr[i-1]) {
                cout << (l == 0 ? "YES\n" : "NO\n");
                return;
            }
        }

        ll ans = 1;
        if (n <= 10) {
            for (ll i = 0; i < n; i++) {
                for (ll j = i+1; j < n; j++) ans *= (arr[i] ^ arr[j]);
            } 

        }
        else ans = r+1;

        cout << (ans >= l and ans <= r ? "YES\n" : "NO\n");
    
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
   // cout<<();
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}