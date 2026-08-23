#include <bits/stdc++.h>
using namespace std;
 
void dfs(long long n, long long x, long long cost, map<long long, long long>& mp) {
    if (mp.count(n) && mp[n] <= cost) {
        return;
    }
    mp[n] = cost;
 
    if (n == 0) {
        return;
    }
    long long q = n / x;
    long long r = n % x;
    dfs(q, x, cost + 1, mp);
 
    if (r){
        dfs(q + 1, x, cost + (x - r) + 1, mp);
    }
}
 
int main() {
    int T;
    cin >> T;
    while (T--) {
        long long a, b, x;
        cin >> a >> b >> x;
        map<long long, long long> A, B;
        dfs(a, x, 0, A);
        dfs(b, x, 0, B);
        long long ans = abs(a - b);
        for (auto [u, cu] : A) {
            for (auto [v, cv] : B) {
                ans = min(ans, cu + cv + abs(u - v));
            }
        }
        cout << ans << endl;
    }
 
    return 0;
}