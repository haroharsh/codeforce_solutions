#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long a, b, k;
    cin >> a >> b >> k;
    
    long long g = gcd(a, b);
    if (max(a, b) / g <= k) {
        cout << 1 << endl;
    } 
    else {
        cout << 2 << endl;
    }
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}