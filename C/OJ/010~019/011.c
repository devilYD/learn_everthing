#include <stdio.h>
#define PI 3.14159
int main(void)
{
    double r, h;
    double S;

    scanf("%lf %lf", &r, &h);

    S = 2 * PI * r * r + 2 * PI * r * h;

    printf("%.2lf", S);

    return 0;
}

/* 
题目描述：
    输入圆柱体的底面半径r和高h，计算圆柱体的表面积并输出到屏幕上。
    要求定义圆周率为如下宏常量
    #define PI 3.14159
输入：
    输入两个实数，为圆柱体的底面半径r和高h。
输出：
    输出一个实数，即圆柱体的表面积，保留2位小数。
示例：
    42.1 71.6
    30076.14
 */