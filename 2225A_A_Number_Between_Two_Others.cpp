#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long x, y;
        cin >> x >> y;
        
        if (y == 2 * x) {
            cout << "NO" <<endl;
        } 
        else {
            cout << "YES" <<endl;
        }
    }
    return 0; 
}