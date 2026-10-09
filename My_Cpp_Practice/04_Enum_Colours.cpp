#include <iostream>
using namespace std;

enum colour { red, yellow, blue, white, black };

int main() {
    colour c;

    c = red;
    cout << "red: " << c << endl; // 输出 0

    c = blue;
    cout << "blue: " << c << endl; // 输出 2

    c = black;
    cout << "black: " << c << endl; // 输出 4

    return 0;
}
