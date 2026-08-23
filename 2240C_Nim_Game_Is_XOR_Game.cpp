#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> arr(n);
        ll xr = 0;
        for (ll &x : arr){
            cin >> x;
            xr ^= x;
        }
        if (n == 1){
            cout << 0 << endl;
            continue;
        }
        if (xr == 0){
            cout << 1 << endl;
            continue;
        }
        int nd = 0;
        ll temp = xr;
        while (temp > 1) {
            temp >>= 1;
            nd++;
        }
        int cnt = 0;
        for (ll x : arr)
            if ((x >> nd) & 1){
                cnt++;
            }
        cout << cnt << endl;
    }
 
    return 0;
}