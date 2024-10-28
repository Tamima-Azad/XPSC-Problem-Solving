#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int s=0;
    if(a>=b){
        s+=a;
        a--;
        s+=max(a,b);
    }else{
        s+=b;
        b--;
        s+=max(a,b);
    }
    cout<<s<<endl;


    return 0;
}