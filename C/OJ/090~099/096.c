#include<stdio.h>

int narcissus(int n);

int main(void)
{
    int m,n;
    int t=0;

    while (scanf("%d %d",&m,&n)!=EOF)
    {
        t=0;
        for (int i = m; i <= n; i++)
        {
            if (narcissus(i))
            {
                printf(" %d"+!t,i);
                t=t+1;
            }
        }
        if (t==0)
        {
            printf("no");
        }
        printf("\n");
    }
    
    return 0;
}

int narcissus(int n)
{
    int a,b,c;
    a=n%10;
    b=((n-a)/10)%10;
    c=(n-a-10*b)/100;

    if (a*a*a+b*b*b+c*c*c == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

/* 
题目描述：
    春天是鲜花的季节，水仙花就是其中最迷人的代表，
    数学上有个水仙花数，他是这样定义的：“水仙花数”
    是指一个三位数，它的各位数字的立方和等于其本身，
    比如：153=13+53+33。
    现在要求输出所有在m和n范围内的水仙花数。 
    要求程序定义一个narcissus()函数和一个main()函
    数，narcissus()函数判断一个整数n是否为水鲜花数，
    其余功能在main()函数中实现。
    int narcissus(int n)
    {
        //判断n是否为水仙花数， 若是函数返回1，否则返回0
    }
    对于C/C++代码的提交，本题要求必须通过定义narcis
    sus函数和main函数实现，否则，提交编译错误，要提
    交完整的程序
输入：
    输入数据有多组，每组占一行，包括两个整数m和n（100<=
    m<=n<=999）。
输出：
    对于每个测试实例，要求输出所有在给定范围内的水仙花
    数，就是说，输出的水仙花数必须大于等于m,并且小于等于
    n，如果有多个，则要求从小到大排列在一行内输出，之间
    用一个空格隔开;如果给定的范围内不存在水仙花数，则输
    出no;每个测试实例的输出占一行。
示例：
    100 120
    no
    300 380
    370 371
 */