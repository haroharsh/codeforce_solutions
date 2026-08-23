#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 998244353;
 
ll modpow(ll base, ll exp, ll mod){
    base %= mod; 
    if (base < 0) {
        base += mod;
    }
    ll res = 1;
    while (exp > 0){
        if (exp & 1) {
            res = (res * base) % mod;
        }
        base = (base * base) % mod;
        exp >>= 1;
    }
    return res;
}
 
int main(){
    int t;
    cin >> t;
    while (t--) {
        ll n, m, r, c;
        cin >> n >> m >> r >> c;
        ll E = (n - r + 1) * (c - 1) + (r - 1) * m;
        cout << modpow(2, E, MOD) << endl;
    }
    return 0;
}