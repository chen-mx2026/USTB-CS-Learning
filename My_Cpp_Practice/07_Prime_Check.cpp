#include <iostream>
using namespace std;

int main() {
    bool t = 1; // 假设它是素数
    int n;
    cout << "n=";
    cin >> n;

    if (n <= 1) {
        t = 0;
    } else {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                t = 0;
                break;
            }
        }
    }

    if (t) {
        cout << n << " is prime number" << endl;
    } else {
        cout << n << " is not prime number" << endl;
    }
    return 0;
}
