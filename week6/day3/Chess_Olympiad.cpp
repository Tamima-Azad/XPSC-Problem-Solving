#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int x,y,z;cin>>x>>y>>z;
    double a=x+0.5*y-(x+y+z)+4,b=z+0.5*y;
    if(a>b) cout<<"Yes";
    else cout<<"No";
    return 0;
}