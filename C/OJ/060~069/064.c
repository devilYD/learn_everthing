#include <stdio.h>

int main(void)
{
    char ch;

    while (ch = getchar() , ch != '@')
    {
        if (ch >= 'A' && ch <= 'Y')
        {
            ch = ch - 'A' + 'a';
            ch = ch + 1;
            printf("%c", ch);
        }
        else if (ch >= 'a' && ch <= 'y')
        {
            ch = ch + 1;
            printf("%c", ch);
        }
        else if (ch == 'Z' || ch == 'z')
        {
            printf("a");
        }
        else
        {
            printf("%c", ch);
        }
    }
    return 0;
}
/* 
题目描述：
    从键盘输入一批字符，以@结束，按要求加密并输出。
输入：
    从键盘输入一批字符，占一行，以@结束。
输出：
    输出占一行
    加密规则:
    1）所有字母均转换为小写。
    2）若是字母'a'到'y'，则转化为下一个字母。
    3）若是'z'，则转化为'a'。
    4）其它字符，保持不变。
输入：
    Kyh520@
输出：
    lzi520
 */