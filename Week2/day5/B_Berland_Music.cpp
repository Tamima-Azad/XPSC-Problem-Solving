#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v1;
        map<int, int> mp;
        vector<int> a;
        int n;
        cin >> n;
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
            v1.push_back(x);
            mp[x] = i;
        }
        string str;
        cin >> str;
        vector<int> zero;
        vector<int> one;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '0')
            {
                zero.push_back(v1[i]);
            }
            else
            {
                one.push_back(v1[i]);
            }
        }
 
        sort(zero.begin(), zero.end(), greater<int>());
        sort(one.begin(), one.end(), greater<int>());
        sort(a.begin(), a.end(), greater<int>());
 
        int i;
        for (i = 0; i < one.size(); i++)
        {
            ans[mp[one[i]]] = a[i];
        }
        for (int j = 0; j < zero.size(); j++)
        {
            ans[mp[zero[j]]] = a[i];
            i++;
        }
        for (auto v : ans)
        {
            cout << v << " ";
        }
        cout << endl;
    }
    return 0;
}