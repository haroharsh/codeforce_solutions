#include <bits/stdc++.h>
using namespace std;
 
long long lcm(long long a, long long b) {
    return a / gcd(a, b) * b;
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long a, b, c, m;
        cin >> a >> b >> c >> m;
        long long ab = lcm(a, b);
        long long ac = lcm(a, c);
        long long bc = lcm(b, c);
        long long abc = lcm(ab, c);
        long long alice = 6 * (m / a)- 3 * (m / ab) - 3 * (m / ac) + 2 * (m / abc);
 
        long long bob = 6 * (m / b)- 3 * (m / ab)- 3 * (m / bc)+ 2 * (m / abc);
 
        long long carol = 6 * (m / c)- 3 * (m / ac)- 3 * (m / bc)+ 2 * (m / abc);
 
        cout << alice << " " << bob << " " << carol << endl;
    }
 
    return 0;
}