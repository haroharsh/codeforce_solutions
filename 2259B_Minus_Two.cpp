#include <bits/stdc++.h>
using namespace std;
 
 
int solve(vector<long long>& a) {
    int leftOdd = 0;
    int left0 = 0;
    int left2 = 0;
    for (long long x : a) {
        if (x % 2 == 1) leftOdd++;
        else if (x % 4 == 0) left0++;
        else left2++;
    }
    return max({leftOdd, left0, left2});
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (auto &x : a) {
            cin >> x;
        }
        cout << solve(a) << endl;
    }
    return 0;
}