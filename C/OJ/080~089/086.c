#include <stdio.h>

int main(void)
{
    char a[3];
    char min;
    int n;

    while (scanf("%s", a) != EOF)
    {
        for (int i = 0; i < 3; i++)
        {
            min = '~';
            for (int i = 0; i < 3; i++)
            {
                if (min >= a[i])
                {
                    min = a[i];
                    n = i;
                }
            }
            printf(" %c" + !i, min);
            a[n] = '~';
            n = 0;
        }
        printf("\n");
    }

    return 0;
}

/* 
题目描述：
    输入三个字符后，按各字符的ASCII码从小到大的顺序输出这三个字符。
输入：
    输入数据有多组，每组占一行，有三个字符组成，之间无空格。
输出：
    对于每组输入数据，输出一行，字符中间用一个空格分开。
示例：
    qwe
    e q w
    asd
    a d s
    zxc
    c x z
 */