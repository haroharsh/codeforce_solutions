#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> w(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> w[i];
        }
        if (n % 2 != 0) {
            cout << "NO" <<endl;
            continue;
        }
        
        long long min_odd = 2e18;
        long long max_even = -1;
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 1) {
                min_odd = min(min_odd, w[i]);
            } 
            else {
                max_even = max(max_even, w[i]);
            }
        }
        if (max_even + 1 < min_odd) {
            cout << "YES" <<endl;
        } 
        else {
            cout << "NO" <<endl;
        }
    }
    return 0;
}