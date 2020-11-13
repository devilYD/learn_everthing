#include <stdio.h>

int main(void)
{
    int a, b;

    scanf("%d %d", &a, &b);

    if (a > 0)
    {
        if (b > 0)
            printf("1");
        else
            printf("4");
    }
    else
    {
        if (b > 0)
            printf("2");
        else
            printf("3");
    }

    return 0;
}

/* 
题目描述：
    从键盘输入2个整数x、y值，表示平面上一个坐标点，判断
    该坐标点处于第几象限，并输出相应的结果。
输入：
    输入x，y值表示一个坐标点。坐标点不会处于x轴和y轴上，
    也不会在原点。
输出：
    输出对应的象限，用数字1,2,3,4分别对应四个象限。
示例：
    1 1
    1
 */