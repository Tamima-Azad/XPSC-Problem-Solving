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
    int n,m,k;cin>>n>>m>>k;
     vector<int> a(m);
        set<int> kn;  
        unordered_map<int,int>mp;
        
        for (int i = 0; i < m; ++i) {
            cin >> a[i];
        }
        
        // Read the known questions
        for (int i = 0; i < k; ++i) {
            int q;
            cin >> q;
            kn.insert(q);
            mp[q]++;
        }
        string r = "";
        if(n!=m or k+1<m){
            for(int i=0;i<m;i++){
                r+='0';
            }
            cout<<r;
        }
        else if(k==m){
            for(int i=0;i<m;i++){
                r+='1';
            }
            cout<<r;
         }
        else {
            for(int i=0;i<m;i++){
                if(!mp.count(a[i])){
                    r+='1';
                }else {
                    r+='0';
                }
            }
            cout<<r;
        }
        cout << "\n";
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