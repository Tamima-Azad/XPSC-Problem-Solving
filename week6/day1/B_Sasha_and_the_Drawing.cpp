#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(k <= 4 * n - 4) cout << (k + 1) / 2 << endl;
        else if(k == 4 * n - 3) cout << 2 * n - 1 << endl;
        else cout << 2 * n << endl;
    }
    return 0;
}