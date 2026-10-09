#include <iostream>
using namespace std;

int main() {
    long long fact = 1;
    long long sum = 0;

    for (int i = 1; i <= 10; i++) {
        fact *= i;
        sum += fact;
    }

    cout << "10!=" << fact << endl;
    cout << "sum of 1! to 10!=" << sum << endl;
    return 0;
}
