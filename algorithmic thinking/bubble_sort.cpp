#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{
    // 外层循环：控制比较的“轮数”
    // 如果有 size 个元素，最多只需要比较 size - 1 轮
    for (int i = 0; i < size - 1; i++)
    {

        // 内层循环：控制每一轮“相邻比较”的次数
        // ⚠️ 注意这里的 size - 1 - i，极其精妙！
        for (int j = 0; j < size - 1 - i; j++)
        {

            // 如果左边的比右边的大，就交换
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{

    int arr[5] = {0}; // 先全部清零
    cout << "请输入5个数字:";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i]; // 用户输入什么，就依次塞进第 i 个格子
    }
    int size = 5;
    bubbleSort(arr, size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<< endl;
    return 0;
}
