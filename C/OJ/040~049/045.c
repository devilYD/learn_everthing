#include <stdio.h>
#include <math.h>

int main(void)
{
    int i, a, b;
    int x = 0, y = 0, z = 0;

    scanf("%d", &a);

    for (size_t i = 0; i < a; i++)
    {
        scanf("%d", &b);

        if (b < 0)
            x = x + 1;
        else if (b > 0)
            y = y + 1;
        else
            z = z + 1;
    }

    printf("%d %d %d", x, z, y);

    return 0;
}

/* 
题目描述：
    统计给定的n个数中，负数、零和正数的个数。
输入：
    输入的第一个数是整数n（n<100），表示需要统计的数值的个数，
    然后是n个整数 
输出：
    输出一行a,b和c，分别表示给定的数据中负数、零和正数的个数。
示例：
    6 0 1 2 3 -1 0
    1 2 3
 */