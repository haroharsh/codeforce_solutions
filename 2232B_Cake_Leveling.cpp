#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    long long prefix_sum = 0;
    long long max_h = -1;
    
    for (int i = 1; i <= n; i++) {
        long long a;
        cin >> a;
        prefix_sum += a;
        long long current_limit = prefix_sum / i;
        if (i == 1) {
            max_h = current_limit;
        } 
        else {
            max_h = min(max_h, current_limit);
        }
        cout << max_h << (i == n ? "" : " ");
    }
    cout << endl;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}