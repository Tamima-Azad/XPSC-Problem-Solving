#include <iostream>
using namespace std;

void solve() {
    int X, Y, Z, A, B, C;
    cin >> X >> Y >> Z >> A >> B >> C;
    
    int happy_people = 0;
    
    int useS = min(X, A);
    X -= useS;
    A -= useS;
    happy_people += useS;
    
    int useL = min(Y, B);
    Y -= useL;
    B -= useL;
    happy_people += useL;
    
    int useXL = min(Z, C);
    Z -= useXL;
    C -= useXL;
    happy_people += useXL;
    
    int convertXLtoL = min(Z, B);
    Z -= convertXLtoL;
    B -= convertXLtoL;
    happy_people += convertXLtoL;
    
    int convertXLtoS = min(Z, A);
    Z -= convertXLtoS;
    A -= convertXLtoS;
    happy_people += convertXLtoS;
    
    int convertLtoS = min(Y, A);
    Y -= convertLtoS;
    A -= convertLtoS;
    happy_people += convertLtoS;
    
    cout << happy_people << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
