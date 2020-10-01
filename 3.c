// 计算并输出200-400之间不能那个被3整除的整数的和
#include <stdio.h>
int main()
{
    int s = 0, i;
    for (i = 200; i <= 400; i++)
        if (i % 3 != 0)
            s += i;
    printf("%d", s);
}