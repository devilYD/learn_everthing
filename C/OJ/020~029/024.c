#include <stdio.h>

int main(void)
{
    char a;
    int b;

    scanf("%c", &a);

    if (a < 'a')
        b = a - 'A' + 1;
    else
        b = a - 'a' + 1;

    printf("%d", b);

    return 0;
}

/* 
题目描述：
    输入一个英文字母（可能是大写，也可能是小写），输
    出该字母在字母表中的序号（’a’和’A’的序号为1）。
输入：
    输入只有一个英文字母。
输出：
    输出一个整数，表示该字母在字母表的序号，输出单独占
    一行。
示例：
    D
    4
 */