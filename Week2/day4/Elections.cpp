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
    int n,m;cin>>n>>m;
    int a[n],b[n],sa=0,sb=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sa+=a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        sb+=b[i];
    }int c=0,s=0;
    vector<int>v;
    for(int i=0;i<n;i++){
        if(a[i]<=b[i]){
            int sub=b[i]-a[i]+1;
            v.push_back(sub);
        }
        else c++;
    }
     sort(v.begin(),v.end());
      for(auto i: v){
            if(m>=i){
                c++;
                m-=i;
            }
        }
    if(c<=n/2) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    
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