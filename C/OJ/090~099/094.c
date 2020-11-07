#include <stdio.h>

int vowel(char ch);

int main(void)
{
    char ch;
    int sum;

    while (ch = getchar(), ch != '\n')
    {
        sum = sum + vowel(ch);
    }
    printf("%d", sum);
    return 0;
}

int vowel(char ch)
{
    if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))
    {
        return 1;
    }
    else if ((ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U'))
    {
        return 1;
    }
    
    else
    {
        return 0;
    }
}

/* 
题目描述：
    输入一个字符串，统计其中元音字母的个数。要求使用函数
    vowel()用来判断是否为元音,其余功能在main()函数中实现。 
    int vowel(char ch)
    {
                 //如果ch是元音，返回1，否则返回0
    }
    本题如果是C/C++代码提交，只需要提交vowel函数的定义部分，
    提交其它内容，编译出错。
输入：
    输入一个字符串，长度不超过1000，以回车符结束。
输出：
    输出一个整数，表示元音字母个数。输出单独占一行。
示例：
    Hello world!
    3
 */