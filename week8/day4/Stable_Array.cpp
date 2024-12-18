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
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    queue<int>idx;
    for(int i=0;i<n-1;i++){
        if(a[i]<a[i+1]){
            idx.push(i);
        }
    }
    int cnt=0;
    while(!idx.empty()){
        bool cng=false;
        int sz=idx.size();
        for(int i=0;i<sz;i++){
            int index=idx.front();
            idx.pop();
            if(a[index]<a[index+1]){
                a[index]=a[index+1];
                cng=true;
                if (index > 0 && a[index - 1] < a[index]) idx.push(index - 1);
            }
        }
        // if(!cng){
        //     break;
        // }
        ++cnt;
    }
    cout<<cnt<<endl;
    
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