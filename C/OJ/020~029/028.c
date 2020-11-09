#include <stdio.h>

int main(void)
{
    int a, b;

    scanf("%d", &a);

    if ((a % 400 == 0) || (a % 4 == 0) && (a % 100 != 0))
        printf("Yes");
    else
        printf("No");

    return 0;
}

/* 
题目描述：
    根据一个年份，判断是否是闰年。
输入：
    输入为一个整数，表示一个年份。
输出：
    如果是闰年，输出"Yes"，否则输出"No"。输出单独占一行。
示例：
    2012
    Yes
 */