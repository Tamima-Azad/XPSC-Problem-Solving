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
        string s; 
        cin >> s;
        vector<pair<char, int>> lower, upper;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != 'b' && s[i] != 'B') {
                if (s[i] >= 'a' && s[i] <= 'z')
                    lower.push_back({s[i], i});
                else if (s[i] >= 'A' && s[i] <= 'Z')
                    upper.push_back({s[i], i});
            }
            if (s[i] == 'b' && !lower.empty()) 
                lower.pop_back();
            if (s[i] == 'B' && !upper.empty()) 
                upper.pop_back();
        }

        int i = 0, j = 0;
        while (i < lower.size() && j < upper.size()) {
            if (lower[i].second < upper[j].second) {
                cout << lower[i].first;
                i++;
            } else {
                cout << upper[j].first;
                j++;
            }
        }

        while (i < lower.size()) {
            cout << lower[i].first;
            i++;
        }
        while (j < upper.size()) {
            cout << upper[j].first;
            j++;
        }
        cout << endl;
    
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