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
    int n; cin >>  n;
    vector<int> v(n), vv(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> vv[i];
    }
    for (int i = 0; i < n; i++) {
        vector<pair<int,int>>mp;
        for (int j = 0; j < n; j++) {
            mp.push_back({abs(v[i]-v[j]),v[j]});
        }
        sort(mp.begin(),mp.end(),[](const pair<int,int>&a, const pair<int,int>&b){
            if(a.first==b.first){
                return a.second < b.second;
            }
            else return a.first < b.first;
        });
        int c = 0, cnt = 0;
        for(auto i: mp){
            if(i.second==vv[c])cnt++;
            c++;
        }
        if(cnt==n){
            cout << i + 1 << endl;
            return;
        }
    }
    cout << -1 << endl;
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