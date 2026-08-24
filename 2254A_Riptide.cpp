#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<long long> tokens(3);
        cin >> tokens[0] >> tokens[1] >> tokens[2];
        sort(tokens.begin(), tokens.end());
        
        long long ans = min(tokens[1] - tokens[0], tokens[2] - tokens[1]);
        cout << ans << endl;
    }
    return 0;
}