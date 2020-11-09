#include <stdio.h>

int fact(int n);

int main(void)
{
    int m,k;

    scanf("%d %d",&m,&k);

    printf("%d",fact(m)/(fact(k)*fact(m-k)));

    return 0;
}

int fact(int n)
{
    if (n==1)
        return 1;
    else
        return n*fact(n-1);  
}

/* 
题目描述：
    马上要举办新生程序设计竞赛了，与以往不同的是，本次
    比赛以班为单位，为了全面衡量一个班级的整体水平，要
    求从一个班的m位同学中任选k位同学代表本班参加比赛，
    问有多少种组合方案。显然，这个组合数是m!/(k!(m-k)!)。
    要求编写函数fact()，实现求一个数的阶乘功能，在主函数
    中调用此函数。 
    int fact(int n)
    {
   //函数返回值为n的阶乘。
    }   
    对于C/C++代码的提交，本题要求必须通过定义fact函数和
    main函数实现，否则，提交编译错误，要提交完整的程序。
输入：
    输入两个正整数m,k，k<=m<=12。
输出：
    输出一个整数，即组合方案数。
示例：
    5 3
    10
 */