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
    vector<ll>v;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        v.push_back(a);
    }
    map<ll,ll>m;
    // for(auto i:v){
    //     m[i]++;
    //     if(m[i]>1) break;
    // }
     for(ll i=v.size()-1;i>=0;i--)
        {
            m[v[i]]++;
            if(m[v[i]]==2)   break;
        }
    cout<<n-m.size()<<endl;
    // vector<ll> v(n);
    //     for(ll i=0;i<n;i++)
    //     {
    //         cin>>v[i];
    //     }
    //     map<ll,ll> mp;
    //     for(ll i=v.size()-1;i>=0;i--)
    //     {
    //         mp[v[i]]++;
    //         if(mp[v[i]]==2)   break;
    //     }
    //     cout<<n-mp.size()<<"\n";
    
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