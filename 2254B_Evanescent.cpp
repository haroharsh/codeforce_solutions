#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    int initial_len = 1;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] != s[i + 1]) {
            initial_len++;
        }
    }
    int max_reduction = 0;
    for (int i = 1; i < n - 1; i++) {
        int old_contrib = (s[i - 1] != s[i]) + (s[i] != s[i + 1]);
        int new_contrib = (s[i - 1] != s[i + 1]);
        int reduction = old_contrib - new_contrib;
        max_reduction = max(max_reduction, reduction);
    }
    cout << initial_len - max_reduction << "\n";
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}