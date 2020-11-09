#include <stdio.h>

int main(void)
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a) && (a - b < c) && (a - c < b) && (b - c < a) && (b - a < c) && (c - a < b) && (c - b < a))
        printf("Yes");
    else
        printf("No");

    return 0;
}

/* 
题目描述：
    给你三个正整数，判断用这三个整数做边长是否能构成一个三角形。
输入：
    输入为三个int范围的正整数，中间有一个空格隔开。
输出：
    如果能构成三角形，输出"Yes"，否则输出"No"
示例：
    3 4 5
    Yes
 */