#include <iostream>
using namespace std;

int main() {
    int choice;
    do {
        cout << "Menu" << endl;
        cout << "1. play games" << endl;
        cout << "2. watch videos" << endl;
        cout << "3. sleep" << endl;
        cout << "0. exit" << endl;
        cout << "Please choose: ";
        cin >> choice;

        switch (choice) {
            case 1: cout << "乐乐" << endl; break;
            case 2: cout << "无量空处" << endl; break;
            case 3: cout << "晚安" << endl; break;
            case 0: cout << "退出程序" << endl; break;
            default: cout << "卡了" << endl;
        }
    } while (choice != 0);
    return 0;
}
