#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    set<int> seen;
    long long total_cost = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        // If the element is already seen, it is a duplicate
        if (seen.count(a[i])) {
            total_cost += seen.size(); // Add cost equal to number of distinct elements seen so far
        }else
        seen.insert(a[i]); // Add the element to the set of seen elements
    }

    cout << total_cost << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
