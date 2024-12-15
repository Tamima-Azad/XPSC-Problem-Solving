#include <bits/stdc++.h>
using namespace std;
#define ll long long 
ll hashPrime = 1610612741;
void solve() {
    string s;cin>>s;
    reverse(s.begin(),s.end());     

   replace(s.begin(), s.end(), 'q', '\0');

    // Replace 'p' with 'q'
    std::replace(s.begin(), s.end(), 'p', 'q');

    // Replace the placeholder with 'p'
    std::replace(s.begin(), s.end(), '\0', 'p');
    cout<<s<<endl;
    
}
int main(){
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