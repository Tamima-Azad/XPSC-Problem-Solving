#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;cin>>n;
        int a[n],s=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s+=a[i];
        }
        if(s%2==0) cout<<n<<endl;
        else{
            int x=0,y=0,first=-1,last=-1;
            for(int i=0;i<n;i++){
             if(a[i]%2!=0){
                first=i;
                break;
             }
               
            }
           // cout<<first<<endl;
            for(int i=n-1;i>=0;i--){
                if(a[i]%2!=0){
                    last=i;
                }
               
            }
            cout<<last+1<<endl;
        }
    }
    return 0;
}
