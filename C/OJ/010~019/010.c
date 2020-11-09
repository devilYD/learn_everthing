#include <stdio.h>
#define PI 3.14159
int main(void)
{
    double r;
    double S, C;

    scanf("%lf", &r);

    S = r * r * PI;
    C = 2 * r * PI;

    printf("%.2lf %.2lf", C, S);

    return 0;
}

/* 
题目描述：
    输入圆的半径，求圆的周长和面积。 要求定义圆周率为如下宏常量
    #define PI 3.14159
输入：
    输入半径r的值，为一实数。
输出：
    输出一行，包括周长和面积。数据之间用一个空格隔开，数据保留
    小数后面两位。
示例：
    3
    18.85 28.27
 */