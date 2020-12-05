#include<stdio.h>
int prime(int n);

int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n/2;i++)
        for(j=1;j<=n;j++)
        {
            if(i+j==n&&prime(i)==1&&prime(j)==1)
               printf("%d %d\n",i,j);
        }
    return 0;
} 

int prime(int n)
{
    int flag=1,i;
    if(n==1)
       flag=0;
    for(i=2;i<n;i++)
        if(n%i==0)
           flag=0;
    if(flag==1)
        return 1;
    else 
        return 0;
}

/* 
题目描述：
    哥德巴赫猜想大家都知道一点吧。我们现在不是想证明这个结论，而是
    对于任给的一个不小于6的偶数，来寻找和等于该偶数的所有素数对。
    做好了这件实事,就能说明这个猜想是成立的。
    要求程序定义一个prime()函数和一个main()函数，prime()函数判断
    一个整数n是否是素数，其余功能在main()函数中实现。
    int prime(int n)
    {
    //判断n是否为素数， 若n为素数，本函数返回1，否则返回0
    }
输入：
    一个偶数M (M是6到1000000之间的一个偶数).
输出：
    输出和等于该偶数的所有素数对a和b，按a递增的顺序输出，(a,b)和(b,
    a)被视为同一个素数对。
示例：
    40
    3 37
    11 29
    17 23
 */