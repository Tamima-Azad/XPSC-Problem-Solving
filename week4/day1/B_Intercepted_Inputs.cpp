#include <bits/stdc++.h>
using namespace std;
#define ll long long 

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
       
         int k;
        cin >> k; 
       // vector<int> a(k);
        unordered_set<int>st;

        for (int i = 0; i < k; ++i) {
            int p;cin>>p;
          // cin >> a[i];
            st.insert(p);
        } int n=0,m=0;
       // sort(a.begin(), a.end());
        int x=k-2;
        for(int i=1;i<=x;i++){
            if(x%i==0){
                int a=i;
                int b=x/i;
            
            if(st.count(a) && st.count(b)){
                n=a;
                m=b;
                break;
            }   
            }
        }
        
        cout << n << " " << m << endl;
        fflush(stdout) or cout.flush();
    }
    return 0;
}