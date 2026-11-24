#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, x;
        cin >> n >> x;
 
        vector<int> a(n);
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        int maxDist = 0;
        int prev = 0;
 
        for (int i = 0; i < n; i++) {
            maxDist = max(maxDist, a[i] - prev);
            prev = a[i];
        }
 
        maxDist = max(maxDist, 2 * (x - prev));
 
        cout << maxDist << '\n';
    }
 
    return 0;
}