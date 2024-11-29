#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cout<<(1^2^2^3);
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int ans=0;
        for(int i=0;i<n;i++) ans^=a[i];
        if(n&1||ans==0){
            cout<<ans<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}