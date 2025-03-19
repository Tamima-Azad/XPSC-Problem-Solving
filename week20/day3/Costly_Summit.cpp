#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N, C;
    cin >> N >> C;
    string S;
    cin >> S;
    
    set<char> languages(S.begin(), S.end()); // Unique languages spoken
    int num_languages = languages.size();
    
    // Calculate cost using translators only
    int translator_cost = (N * (N + 1)) / 2;
    
    // Calculate cost using a mixed strategy (learning one language and using translators for the rest)
    int min_cost = translator_cost;
    for (int learn = 1; learn <= num_languages; ++learn) {
        int remaining_translators = num_languages - learn;
        int trans_cost = (remaining_translators * (remaining_translators + 1)) / 2;
        int total_cost = (learn * C) + trans_cost;
        min_cost = min(min_cost, total_cost);
    }
    
    cout << min_cost << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}