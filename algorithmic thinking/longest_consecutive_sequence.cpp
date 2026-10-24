//状态机思维，双轨制追踪，增量更新与断点结算，边界收尾意识
#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int temp;
    cin >> temp;
    int sum = 1, sum_ = 1, temp_ = temp;

    for (int i = 2; i <= n; i++)
    {
        int x;
        cin >> x;

        if (x == temp)
        {
            sum++;
        }
        else
        {
            if (sum_ < sum)
            {
                sum_ = sum;
                temp_ = temp;
            }
            temp = x;
            sum = 1;
        }
    }
    if (sum_ < sum)
    {
        sum_ = sum;
        temp_ = temp;
    }

    cout << temp_ << " " << sum_ << endl;

    return 0;
}
/*
 * Problem: Find the longest consecutive identical numbers in an array.
 * Author: [你的名字/ID]
 * Date: 2026-10-24
 * Note: This was an exam question where I spent 1 hour deriving the logic. 
 * I used a dual-variable tracking approach (current vs history) to solve it. 
 * Lesson learned: Always handle the final sequence after the loop ends!
 */
