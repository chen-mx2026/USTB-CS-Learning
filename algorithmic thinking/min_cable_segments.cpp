#include <iostream>
using namespace std;

int main()
{
    int M, a, b, c;
    cin >> M >> a >> b >> c;
    int min = 999999;

    for (int i = 0; i <= a; i++)
    {
        for (int j = 0; j <= b; j++)
        {
            int nowLength = 4 * i + 3 * j;
            if (nowLength > M)
            {
                break;
            }
            int remain = M - nowLength;
            int current = 0;
            if (remain <= c)
            {
                current = remain + i + j;

                if (current < min)

                    min = current;
            }
        }
    }
    if (min = 999999)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << min << endl;
    }

    return 0;
}
