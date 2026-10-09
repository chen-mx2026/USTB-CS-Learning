#include <iostream>
using namespace std;

int main() {
    long long fact = 1;
    long long sum = 0;
    int n;

    cout << "Enter your number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        fact *= i;
        sum += fact;
    }

    cout << "n!=" << fact << endl;
    cout << "sum of 1! to n!=" << sum << endl;
    return 0;
}
