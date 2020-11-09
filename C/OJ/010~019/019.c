#include <stdio.h>

int main(void)
{
    int x;
    int mony;

    scanf("%d", &x);

    if (x <= 0)
        printf("error");
    else if (x < 30)
        mony = x * 50;
    else
        mony = x * 48;

    printf("%d", mony);
    return 0;
}

/* 
题目描述：
    某公园门票的票价是每人50元，一次购票
    满30张，每张可以少收2元。试编写自动
    计费系统程序。
输入：
    输入一个正整数，表示购票的数量。
输出：
    输出一个整数，表示用户实际需要支付的金
    额。
示例：
    30
    1440
 */