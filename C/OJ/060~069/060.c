#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, a, b;

    scanf("%d", &n);

    for (int i = 1; n != 0; i++)
    {
        a = n % 10;
        n = (n - a) / 10;
        printf("%d ", a);
    }

    return 0;
}

/* 
题目描述：
    输入一个正整数，将其逆序输出，每个数字后有一个空格
输入：
    输入一个正整数n，你可以假设n在int范围内
输出：
    12354
    4 5 3 2 1 
 */