#include<stdio.h>

int main(void)
{
    int n,i;

    while (scanf("%d",&n)!=EOF)
    {
        for ( i = 0; n!=1; i++)
        {
            if (n%2==0)
                n=n/2;
            else
                n=n*3+1;    
        }
        printf("%d\n",i);
    }
    
    return 0;
}

/* 
题目描述：
    任何一个自然数，如果是偶数，就除以2，如果是奇数，
    就乘以3再加1。最后，经过若干次迭代得到1。也就是
    说，不管怎样迭代，不断除以2以后，最后是1。现在给
    你一个自然数n，求出它转变为1所需要的步数。
输入：
    输入数据有多组，每组输入包含一个自然数n。测试数
    据保证输入数据及中间结果都在int范围内。
输出：
    对每组输入，输出经过角谷猜想变成1的步数。
示例：
    5
    5
    11
    14
 */