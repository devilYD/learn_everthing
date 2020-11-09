#include <stdio.h>

int main(void)
{
    int x, y;

    scanf("%d %d", &x, &y);

    if (x > y)
    {
        printf("%d %d", y, x);
    }
    else
    {
        printf("%d %d", x, y);
    }

    return 0;
}

/* 
题目描述：
    从键盘输入两个整数x,y，按从小到大的顺序输出它们的值。
输入：
    输入两个整数x,y。
输出：
    按从小到大的顺序输出它们的值。数据之间以空格间隔。
示例：
    20 16
    16 20
 */