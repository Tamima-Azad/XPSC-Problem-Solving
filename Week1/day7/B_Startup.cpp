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
    ll n,k;cin>>n>>k;
    map<ll,vector<ll>>bc;
    for(ll i=0;i<k;i++){
        ll a,b;cin>>a>>b;
        bc[a].push_back(b);
    }
    vector<ll>mxb;
    for(auto &i : bc){
        ll sum=0;
        vector<ll>cst=i.second;
        for(ll i=0;i<cst.size();i++){
            sum+=cst[i];
        }
        mxb.push_back(sum);
    }
    sort(mxb.rbegin(),mxb.rend());
    ll sz=mxb.size();
    if(sz<=n){
        ll ans=0;
        for(ll i=0;i<sz;i++){
            ans+=mxb[i];
        }
        cout<<ans<<endl;
    }
    else {
        ll ans=0;
        for(ll i=0;i<n;i++){
            ans+=mxb[i];
        }
        cout<<ans<<endl;
    }

    
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