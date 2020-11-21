#include <stdio.h>
int main(void)
{
    int n, a = 0;

    scanf("%d", &n);

    for (int i = n; i > 1; i--)
    {
        if (n % i == 0)
            a = i;
    }

    if (a != n)
        printf("No");
    else
        printf("Yes");

    return 0;
}

/* 
题目描述：
    输入一个正整数n，判断n是否是素数，若n是素数，输出”Yes”,
    否则输出”No”。
输入：
    输入一个正整数n(n<=1000)
输出：
    如果n是素数输出"Yes"，否则输出"No"。输出占一行。
示例：
    2
    Yes
 */