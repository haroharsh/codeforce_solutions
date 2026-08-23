#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    long long maxi = 0;
    long long sum = 0;
    
    for(int i = 0; i < n; i++) {
        if(a[i] > b[i]) {
            swap(a[i], b[i]);
        }
        sum += b[i];
        maxi = max(maxi, (long long)a[i]);
    }
    
    cout << (sum + maxi) << endl;
}
int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}