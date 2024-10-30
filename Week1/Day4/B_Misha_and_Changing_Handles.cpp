#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n;cin>>n;
   map<string,string>m,p;
   for(int i=1;i<=n;i++){
    string a,b;
    cin>>a>>b;
    if(p.find(a)!=p.end()){
        string s=p[a];
        m[s]=b;
        p.erase(a);
        p[b]=s;
    }else{
        m[a]=b;
        p[b]=a;
    }
   }
   cout<<m.size()<<endl;
    for(auto i: m) cout<<i.first<<" "<<i.second<<endl;
    return 0;
}