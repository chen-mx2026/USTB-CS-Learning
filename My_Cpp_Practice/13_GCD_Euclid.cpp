#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "a="; cin >> a;
    cout << "b="; cin >> b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    cout << "最大公约数是" << a << endl;
    return 0;
}
