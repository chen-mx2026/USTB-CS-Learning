#include <iostream>
using namespace std;

int main() {
    int sum = 0; // 累加器定义在循环外

    for (int n = 2; n <= 100; n++) {
        bool isprime = 1; // 标记变量定义在循环内，每轮重置
        
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                isprime = 0;
                break;
            }
        }
        
        if (isprime) {
            cout << n << " ";
            sum = sum + n;
        }
    }
    
    cout << endl << "sum=" << sum << endl; // 输出 1060
    return 0;
}
