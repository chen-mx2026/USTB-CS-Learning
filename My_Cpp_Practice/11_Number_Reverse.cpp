#include <iostream>
using namespace std;

int main() {
    int m, n = 0;
    cout << "m=";
    cin >> m;
    
    while (m > 0) {
        int t = m % 10;
        n = n * 10 + t;
        m = m / 10;
    }
    
    cout << "result is:" << n << endl;
    return 0;
}
