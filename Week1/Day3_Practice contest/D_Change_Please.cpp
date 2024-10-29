#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int x;cin>>x;
        int y=(100-x);
        cout<<y-(y%10)<<endl;
    }
}