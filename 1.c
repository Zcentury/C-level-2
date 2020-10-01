// 求100之内自然数中最大的能被17整除的数1
#include <stdio.h>
int main()
{
    int i;
    for (i = 100; i > 0; i--)
        if (i % 17 == 0)
            break;
    printf("%d", i);
}