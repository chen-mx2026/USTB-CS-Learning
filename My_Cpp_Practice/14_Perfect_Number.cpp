#include <iostream>
using namespace std;

int main() {
    cout << "Perfect number between 1 and 1000" << endl;

    for (int n = 1; n <= 1000; n++) {
        int sum = 0;
        
        for (int i = 1; i < n; i++) {
            if (n % i == 0) {
                sum += i;
            }
        }
        
        if (n == sum) {
            cout << n << " ";
        }
    }
    
    cout << endl;
    return 0;
}
