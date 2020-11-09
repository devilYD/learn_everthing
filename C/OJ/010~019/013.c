#include <stdio.h>
#include <math.h>
int main(void)
{
    float x1, y1, x2, y2, d;

    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

    d = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    d = sqrt(d);

    printf("%.2f", d);

    return 0;
}

/* 
题目描述：
    给定A(x1, y1), B(x2, y2)两点坐标，计算它们间的距离。
描述：
    输入包含四个实数x1, y1, x2, y2，分别用空格隔开，含义
    如描述。其中0≤x1,x2,y1,y2≤100。
输出：
    输出占一行，包含一个实数d，表示A, B两点间的距离。结果
    保留两位小数。
示例：
    1 1 2 2
    1.41
 */