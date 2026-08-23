#include <iostream>
#include <vector>
#include <climits>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int min_val = INT_MAX;
        int max_val = INT_MIN;
        vector<int> arr;
        for(int i = 0;i < n;i++){
            int temp;
            cin >> temp;
            if (temp < min_val) min_val = temp;
            if (temp > max_val) max_val = temp;
        }
        int ans = (max_val - min_val + 1) / 2;
        cout << ans << endl;
        
    }
    return 0;
}