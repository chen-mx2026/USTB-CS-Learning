#include <iostream>
using namespace std;

int main() {
    int a = 108;
    int b = 22;
    int c = a / b; // 整数除法，结果截断
    cout << "c=" << c << endl;

    double d = 108;
    double e = 22;
    double t = d / e; // 浮点数除法
    cout << "t=" << t << endl;

    char f = 'a'; // 'a' 的 ASCII 码是 97
    int g = f + a * b; // 字符参与数学运算
    cout << "g=" << g << endl;

    return 0;
}
