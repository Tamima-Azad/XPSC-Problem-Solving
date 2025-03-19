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
bool ispivot(int i,const vector<int>&x,const vector<int>&y){
    int p=x[i];
    vector<pair<int,int>>d;
    for(int j=0;j<x.size();j++){
        d.push_back({abs(x[j]-p),x[j]});
    }
    sort(d.begin(),d.end());
    vector<int>s;
    for(auto &p:d){
        s.push_back(p.second);
    }
    return s==y;
}
void solve() {
    int n;cin>>n;
    vector<int>x(n), y(n);
    for(int i=0;i<n;i++) cin>>x[i];
    for(int i=0;i<n;i++) cin>>y[i];
    for(int i=0;i<n;i++){
        if(ispivot(i,x,y)){
            cout<<(i+1)<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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