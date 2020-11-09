#include <stdio.h>

int main(void)
{
    char a, b;

    scanf("%c", &a);

    if (a < 'a')
    {
        printf("%c", a);
    }
    else
    {
        b = a - 'a' + 'A';
        printf("%c", b);
    }

    return 0;
}

/* 
题目描述：
    输入一个字母，若是小写字母，则变为大写输出，否则，原样输出。
输入：
    输入为一个字符。
输出：
    按题目要求输出一个字符，单独占一行。
示例：
    a
    A
 */