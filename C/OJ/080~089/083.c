#include <stdio.h>

int main(void)
{
    int n;
    int x = 0, y = 0, z = 0;
    float a;

    n = 1;

    while (scanf("%d", &n) && n!=0)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%f", &a);
            if (a > 0)
            {
                x = x + 1;
            }
            else if (a < 0)
            {
                y = y + 1;
            }
            else
            {
                z = z + 1;
            }
        }
        printf("%d %d %d\n", y, z, x);
        x = 0;
        y = 0;
        z = 0;
    }

    return 0;
}

/* 
题目描述：
    统计给定的n个数中，负数、零和正数的个数
输入：
    输入数据有多组，每组占一行，每行的第一个数是整数n（n<100），
    表示需要统计的数值的个数，然后是n个实数；如果n=0，则表示输入
    结束，该行不做处理。
输出：
    对于每组输入数据，输出一行a,b和c，分别表示给定的数据中负数、
    零和正数的个数。
示例：
    6 0 1 2 3 -1 0
    1 2 3
    5 1 2 3 4 0.5
    0 0 5
    0
 */