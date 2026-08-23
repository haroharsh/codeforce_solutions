#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int i = 1;
    while (n > 0) {
        if (i % 2 == 0) {
            cout << "I love ";
        }
        else {
            cout << "I hate ";
        }
        if ( n - 1 > 0) {
            cout << "that ";
        }
        else {
            cout << "it ";
        }
        i++;
        n--;
    }
}