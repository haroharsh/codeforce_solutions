#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (y2 < y1) {
        cout << -1 << endl;
        return;
    }
 
    long long diag_moves = y2 - y1;
    x1 += diag_moves;
 
    if (x1 < x2) {
        cout << -1 << endl;
        return;
    }
 
    long long left_moves = x1 - x2;
    cout << diag_moves + left_moves << endl;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}