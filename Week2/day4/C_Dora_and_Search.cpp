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
    int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int a;cin>>a;
            v.push_back(a);
        }
        int i=0,j=n-1,flag=0;
        int maxi=n,mini=1;
        while(i<j)
        {
            if(v[i]==mini){
                mini++;
                i++;
            }
            else if(v[i]==maxi){
                maxi--;
                i++;
            }
            else if(v[j]==mini){
                mini++;
                j--;
            }
            else if(v[j]==maxi){
                maxi--;
                j--;
            }
            else{
                flag=1;
                cout<<i+1<<" "<<j+1<<endl;
                break;
            }
        }
 
        if(flag==0) cout<<-1<<endl;
    
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