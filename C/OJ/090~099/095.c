#include <stdio.h>

int HmsToS(int h, int m, int s);
void PrintTime(int s);

int main(void)
{
    int h,m,s;
    int sum;

    scanf("%d:%d:%d",&h,&m,&s);
    sum=HmsToS(h,m,s);
    PrintTime(sum);

    return 0;
}

int HmsToS(int h, int m, int s)
{
    return h * 60 * 60 + m * 60 + s;
}
void PrintTime(int s)
{
    int a[3];
    a[2] = s % 60;
    s = s - a[2];
    a[1] = s % (60 * 60) / 60;
    s=s-a[1]*60;
    a[0]=s/(60*60);
    for (int i = 0; i < 3; i++)
    {
        if (a[i] == 0)
            printf(":00" + !i);
        else if (a[i] < 10)
            printf(":0%d" + !i, a[i]);
        else
            printf(":%d" + !i, a[i]);
    }
    printf("\n");
}

/* 
题目描述：
    从键盘输入两个时间点(24小时制），输出两个时间点
    之间的时间间隔，时间间隔用“小时:分钟:秒”表示。要
    求程序定义如下两个函数，并在main()中调用这两个函
    数实现相应的功能,其中main函数系统已经实现，你只
    需要完成下面这两个函数的定义。 
    int HmsToS(int h, int m, int s)     // 三个参数分别为用于表示一个时间点的时、分、秒
    {
        //把时分秒转换成秒并返回。 
    }
    void PrintTime(int s);     //形参s表示一个时间段的长度，单位是秒
    {
        //将时间段转换为对应的“小时:分钟:秒” 格式输出 
    }  
    对于C/C++代码的提交，本题只需要提交HmsToS函数和Pr
    intTime函数的定义部分，否则，提交编译错误。
输入：
    输入数据有多组。每组输入包括两行。第一行为时间点
    1，第二行为时间点2，时间点均以“HH:MM:SS”的格式
    输入。测试数据保证时间点1早于时间点2。
输出：
    对应每组数据，有一行输出，以“HH:MM:SS”的格式输出时
    间间隔。注意不足两位要补占位符0。格式参看输入输出。
示例：
    12:01:12
    13:09:43
    01:08:31
    12:40:12
    13:09:43
    00:29:31
PS：
    因为只用提交函数定义部分就懒得写主函数驱动了2333
 */