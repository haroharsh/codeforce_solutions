#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int a ,b;
        cin >> a >> b;
        int need;
        if(a%b != 0){need = b - (a % b);}
        else need = 0;
        cout << need <<endl;
    }
    return 0; 
}