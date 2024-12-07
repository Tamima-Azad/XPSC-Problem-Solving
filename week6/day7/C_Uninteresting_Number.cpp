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
 string s;cin>>s;
 
   ll val = 0;
   ll a=0,b=0,k;
 
   for(auto p:s){
    val+=(p-'0');
    val%=9;
    if(p=='2')a++;
    if(p=='3')b++;
   }
 
   for(ll i=0;i<=a;i++){
    for(ll j=0;j<=b;j++){
        k = (val+(i*2)+(j*6))%9;
        if(k%9==0){
            cout<<"YES\n";
            return;
        }
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