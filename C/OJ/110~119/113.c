#include<stdio.h>
int fib(int k,int *i);

int main(void )
{
    int n,i=0;
    int *m;
    m=&i;
    scanf("%d", &n);
    n=fib(n,m);
    printf("%d\n",n);
    printf("递归调用了%d次",i);
    return 0;
}

int fib(int k,int *i)
{
    *i=*i+1;
    if(k == 1 || k == 2)
        return 1;
    else
        return fib(k-1,i) + fib(k-2,i);
}

/* 
题目描述：
    如下程序的功能是计算 Fibonacci数列的第n项。
    函数fib()是一个递归函数。请你改写该程序，计
    算第n项的同时，统计调用了多少次函数fib（包
    括main()对fib()的调用）。
    #include<stdio.h>
    int fib(int k);

    int main(void )
    {
        int n;
        scanf("%d", &n);
        printf("%d\n", fib(n));  
        return 0;
    }

    int fib(int k)
    {
        if(k == 1 || k == 2)
            return 1;
        else
            return fib(k-1) + fib(k-2);
    }
输入：
    输入一个正整数n。
输出：
    输出包含两行，第一行是一个整数，表示第n项的值；
    第二行输出递归调用了多少次，具体格式见输出样例。
示例：
    20
    6765
    递归调用了13529次
 */