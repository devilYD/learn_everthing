#include <stdio.h>

char max(char a, char b);

int main(void)
{
    char a, b, c, d;

    scanf("%c %c %c", &a, &b, &c);

    d = max(a, b);
    d = max(d, c);

    printf("%c", d);
}

char max(char a, char b)
{
    if (a >= b)
        return a;
    else
        return b;
}

/* 
题目描述：
    给你三个ASCII字符(不含空白字符:包括空格、
    制表符\t、回车换行符\n)，找出其中最大的那
    个
输入：
    输入包含三个字符，之间有一个空格隔开。
输出：
    输出ASCII码最大的那个字符，占一行。
示例：
    a b c
    c
 */