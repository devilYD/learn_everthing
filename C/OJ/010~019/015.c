#include <stdio.h>

int main(void)
{
    int a, b, c, x, y, z, sum1, sum2, num;

    scanf("%d:%d:%d", &a, &b, &c);
    scanf("%d:%d:%d", &x, &y, &z);

    sum1 = (a * 3600 + b * 60 + c);
    sum2 = (x * 3600 + y * 60 + z);
    num = sum2 - sum1;

    printf("%d", num);

    return 0;
}

/* 
题目描述：
    读入两个用“时:分:秒”表示的时间点，计算以秒为单位的时间间隔。
输入：
    输入有两行，每行是一个用“时:分:秒”表示的时间点。测试数据保
    证第二个时间点晚于第一个时间点。
输出：
    输出一个整数，表示时间间隔的秒数。
示例：
    08:00:00
    09:00:00
    3600
 */