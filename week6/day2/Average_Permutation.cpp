#include <bits/stdc++.h>

using namespace std;

int main() {
    int test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {
        int n;
        cin >> n;
        int arr[n];
        arr[0] = n-1;
        arr[n - 1] = n ;
        arr[1] = n - 2;
        
        for (int i = 1; i < n - 3; i++)
        {
            arr[i+1] = i ;
        }
        if(n>3)
            arr[n - 2] = n - 3;
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;

    }

}