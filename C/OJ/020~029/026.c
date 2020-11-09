#include <stdio.h>

int main(void)
{
    char a;

    scanf("%c", &a);

    if (a >= 'A' && a <= 'Z')
        printf("upper");
    else if (a >= 'a' && a <= 'z')
        printf("lower");
    else if (a >= '0' && a <= '9')
        printf("digit");
    else
        printf("other");

    return 0;
}

/* 
题目描述：
    从键盘输入一个字符，判断该字符是否大写字母、小
    写字母、数字字符或其他字符。分别输出对应的提示
    信息。
输入：
    输入一个字符。
输出：
    如果该字符是大写字母，则输出“upper”；若是小写字
    母，则输出“lower”；若是数字字符，则输出“digit”；
    若是其他字符，则输出“other”。（输出不含双引号）。
示例：
    1
    digit
 */