#include <iostream>
#include <string>
using namespace std;

int main() {
    string m;
    cout << "m=";
    cin >> m;

    int left = 0;
    int right = m.length() - 1;
    bool a = true;

    while (left < right) {
        if (m[left] != m[right]) {
            a = false;
            break;
        }
        left++;
        right--;
    }

    if (a) {
        cout << "m是回文字符串" << endl;
    } else {
        cout << "m不是回文字符串" << endl;
    }
    return 0;
}
