#include <stdio.h>

double CancelFee(double price);

int main(void)
{
    double price;
    scanf("%lf", &price);
    printf("%.1lf", CancelFee(price));
    return 0;
}

double CancelFee(double price)
{
    price = price * 0.05;

    if (price - (int)price >= 0.75)
        price = (int)price + 1;
    else if (price - (int)price >= 0.5)
        price = (int)price + 0.5;
    else if (price - (int)price >= 0.25)
        price = (int)price + 0.5;
    else
        price = (int)price;

    return price;
}

/* 
题目描述：
    2013年起，火车票退票费比例下调：票面乘车站开
    车时间前48小时以上的按票价5%计退票费。同时，
    车票退票费的计算方法不再四舍五入到元为单位，
    而是以5角为单位：尾数小于0.25元的舍去、不小于
    0.25元且小于0.75元的计为0.5元、不小于0.75元的
    进为1元。编写一个函数，计算退票费，假定退票时
    间举例开车时间在48小时以上。函数原型如下：
    double CancelFee(double price);
    本题如果是C/C++代码提交，只需要提交CancelFee函
    数的定义部分，提交其它内容，编译出错。
输入：
    输入一个实数，表示火车票票面价格。
输出：
    输出一个实数，表示退票费，结果保留一位小数。
示例：
    106
    5.5
 */