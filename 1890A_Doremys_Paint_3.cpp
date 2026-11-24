#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    map<int, int> freq;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }
 
    if (freq.size() > 2) {
        cout << "No\n";
    }
    else if (freq.size() == 1) {
        cout << "Yes\n";
    }
    else {
        auto it = freq.begin();
        int count1 = it->second;
        it++;
        int count2 = it->second;
 
        if (abs(count1 - count2) <= 1) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}