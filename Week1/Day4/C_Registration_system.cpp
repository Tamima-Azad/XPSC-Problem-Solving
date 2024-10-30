#include<bits/stdc++.h>
 
//#include <iostream>
#include <string>
#include <map>
using namespace std;
 
 
int main()
{
    int n;cin>>n;
    map<string, int > freq;
    while(n--){
            string s;cin>>s;
 
        if( freq.count(s) ==0){
            cout<<"OK"<<endl;
            freq[s]=1;
        }
 
        else{
            cout<<s<<freq[s]<<endl;
            freq[s]++;
        }
 
    }
}