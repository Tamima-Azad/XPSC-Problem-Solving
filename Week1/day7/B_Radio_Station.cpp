#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;cin>>n>>m;
    map<string,string>nn;
    for(int i=0;i<n;i++){
        string a,b;cin>>a>>b;
        nn[b]=a;
    }
    // for(auto i: nn){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    for(int i=0;i<m;i++){
        string a,b;cin>>a>>b;
        b.pop_back();
        cout<<a<<" "<<b<<"; #"<<nn[b]<<endl;
    }

}