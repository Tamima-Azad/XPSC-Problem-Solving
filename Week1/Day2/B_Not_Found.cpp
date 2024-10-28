#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    map<char,int>m;
    for(auto i=0;i<s.size();i++){
        m[s[i]]=1;
    }
    for(auto i='a';i<='z';i++){
        if(m[i]!=1) {
             cout<<i<<endl;
        return 0;
        }
    }
    cout<<"None"<<endl;
    return 0;
}