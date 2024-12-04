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
bool cmp(const pair<ll,ll>&a, const pair<ll,ll>&b){
    return a.second>b.second;
}
void solve() {
    ll n,x;cin>>n>>x;
    vector<ll>a(n),b(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<n;i++){
        cin>>b[i];
    }
    vector<pair<ll,ll>>v;
    for(ll i=0;i<n;i++){
        v.push_back({a[i],a[i]*b[i]});
    }
    sort(v.begin(),v.end(),cmp);
    ll cnt=0,d=0;
    for( auto [i,j]:v){
        cnt+=j;
        d++;
        if(cnt>=x){
            cout<<d<<endl;
            return;
        }
    }
    cout<< -1<<endl;  
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