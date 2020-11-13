#include <stdio.h>

int main(void)
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == b * b + a * a))
        printf("yes");
    else
        printf("no");

    return 0;
}

/* 
题目描述：
    输入三个正整数，判断用这三个整数做边长是否能构成一个直角三角形。
输入：
    输入三个正整数。
输出：
    能否构成直角三角形。如能输出：yes.若不能，输出：no。
示例：
    6 8 10
    yes
 */