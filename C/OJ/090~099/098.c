#include <stdio.h>

double funF(double x);
double funG(double x);

int main(void)
{
    double x;
    scanf("%lf", &x);
    printf("%.2lf", funF(funG(x)));
    return 0;
}

double funF(double x)
{
    if (x - 3 > 0)
    {
        if (x + 1 > 0)
        {
            return 2 * x - 2;
        }
        else
        {
            return -4;
        }
    }
    else
    {
        if (x + 1 > 0)
        {
            return 4;
        }
        else
        {
            return 2 - 2 * x;
        }
    }
}

double funG(double x)
{
    return x * x - 3 * x;
}

/* 
题目描述：
    求复合函数F(G(x))，其中函数F(x)=|x-3|+|x+1|，
    函数G(x)=x^2-3x。要求编写函数funF()和funG()分
    别求F(x)和G(x)，其余功能在main()中实现。
    double funF(double x)
    {
    //函数返回F(x)的值；
    }
    double funG(double x)
    {
    //函数返回G(x)的值；
    }
    本题如果是C/C++代码提交，只需要提交funF和funG函
    数的定义部分，提交其它内容，编译出错。
输入：
    输入一个实数x。
输出：
    输出复合函数的值，结果保留2位小数。输出占一行。
示例：
    10.2
    144.88
 */