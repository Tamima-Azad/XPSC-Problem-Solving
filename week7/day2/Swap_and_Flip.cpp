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
    string s,t; cin>>s>>t;
    int s0=0,s1=0,t0=0,t1=0,cnt=0,c0=0,c1=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0') {
            s0++;
            cnt++;
            c0++;
        }else{
            s1++;
            cnt--;
            c1++;
        }
        if(t[i]=='0'){
            t0++;
            cnt++;
            c0++;
        }else{
            t1++;
            cnt--;
            c1++;
        }
        
    }
     if(s==t) cout<<"YES\n";
    //  else if(s0==t1 || s1==t0) cout<<"YES\n";
    //  else cout<<"NO\n";
    else if(c0%2==0 and c1%2==0) cout<<"YES\n";
    else cout<<"NO\n";

    // else if(cnt==0||cnt%2==0) cout<<"YES\n";
    // else cout<<"NO\n";

    
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