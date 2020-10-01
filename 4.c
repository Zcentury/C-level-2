// 从键盘输入10个数，统计非负数的个数，并计算非负数的和
#include <stdio.h>
int main()
{
    int fs;
    int num[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (num[i] < 0)
            printf("%d是负数", num[i]);
    }
}