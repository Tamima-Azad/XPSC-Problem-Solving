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
void solve() {
    int n;cin>>n;
    for (int x = 1; x <= 20; x++) {
	    for (int y = 1; y <= 20; y++) {
	        if (x + y >= n || x == y) continue;
	        int z = n - x - y;
	        if (z == x || z == y) continue;
	        if (x % 3 == 0 || y % 3 == 0 || z % 3 == 0) {
	            continue;
	        }
	       cout<<"YES\n";
	        cout << x << ' ' << y << ' ' << z << endl;
	        return;
	    }
	}
	cout<<"NO\n";
    
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}