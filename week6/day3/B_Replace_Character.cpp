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
    string s;cin>>s;
    map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }
    char mxchar='a';
    int maxfeq=0;
    int mn = INT_MAX, mx = 0,i=0;
    int mnidx = -1, mxidx = -1;
    for (int i = 0; i < n; i++) {
            if (freq[s[i]] < mn || (freq[s[i]] == mn && s[i] < s[mnidx])) {
                mn = freq[s[i]];
                mnidx = i;
            }
            if (freq[s[i]] > mx || (freq[s[i]] == mx && s[i] > s[mxidx])) {
                mx = freq[s[i]];
                mxidx = i;
            }
        }
    //  for(auto& [ch,cnt]:freq){
    //      if(cnt>=maxfeq){
    //         maxfeq=cnt;
    //         mxchar=ch;
    //         break;
    //     }
    //     if (cnt< mn || (cnt == mn && ch < s[mnidx])) {
    //             mn = cnt;
    //             mnidx = i;
    //         }
    //         if (cnt> mx || (cnt == mx && ch > s[mxidx])) {
    //            mx = cnt;
    //             mxidx = i;
    //         }
    //         i++;
     
    // cout<<endl;
    // cout<<maxfeq<<" "<<mxchar<<endl;
    // cout<<endl;
    // for(int i=0;i<n;i++){
    //     if(s[i]!=mxchar){
    //         s[i]=mxchar;
    //         break;
    //     }
    // }

    s[mnidx] = s[mxidx];
        cout << s << endl;
   // cout<<s<<endl;
   
    
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