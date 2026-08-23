#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int T;
    cin >>T;
    while(T--){
        long long n, k;
        cin >> n >> k;
        long long ans = 0;
        long long curr = min(n, k);
        ans = ans + curr;
        n = n - curr;
        long long cost = 2;
        while(curr > 0){
            long long pur = min(curr, n / cost);
            ans =ans + pur;
            n = n - pur * cost;
            curr =pur;
            cost <<= 1;
        }
        cout << ans << endl;
    }
 
    return 0;
}