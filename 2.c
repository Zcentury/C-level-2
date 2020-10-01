// 已知a，b，c都是1位整数，求当三位整数abc、cba的和为1333时a、b、c的值
#include <stdio.h>
int main()
{
    int a, b, c;
    for (a = 1; a < 10; a++)
    {
        for (b = 0; b < 10; b++)
        {
            for (c = 1; c < 10; c++)
                if (a * 100 + b * 10 + c + c * 100 + b * 10 + a == 1333)
                    printf("%d,%d,%d\n", a, b, c);
        }
    }
}