#include<iostream>
using namespace std;
 
int solve(int n , int x) {
    if(n <= 2) {
        return 1;
    }
    int bound = 2 + x;
    int count = 2 ;
    while (1) {
        if (bound >= n) {
            return count;
        }
        bound += x;
        count++;
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,x;
        cin >> n >> x;
        int res = solve(n,x);
        cout << res << endl;
    }
    return 0;
}