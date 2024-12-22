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
    int n,a,b,c;cin>>n>>a>>b>>c;
    // int s=0,i=0;
    // while(true){
    //       if(s>=n){
    //         break;
    //     }i++;
    //     s+=a;
    //       if(s>=n){
    //         break;
    //     }
    //     i++;
    //     s+=b;
    //       if(s>=n){
    //         break;
    //     }s+=c;
    //     i++;
      
    // }
    // cout<<i<<endl;
    ll s=a+b+c;
    ll ss=n/s;
    ll r=n%s;
    if(r==0){
        cout<<3*ss;
        //return;
    }
    else if(r<=a){
        cout<<3*ss+1;
    }
    else if(r<=a+b){
        cout<<3*ss+2;
    }
    else cout<<3*ss+3;
    cout<<endl;

    
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