#include <stdio.h>

int main()
{
    double multiply,m;
    int n,i;
    multiply=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        multiply=i*multiply;
        for(;multiply>=10;)
            multiply/=10;
    }
    printf("%d\n",(int)multiply);
    return 0;
}

/* 
题目描述：
    输入一个正整数n。输出n!的最高位上的数字。
输入：
    输入一个正整数n（n不超过1000）。
输出：
    输出n!的最高位上的数字。
示例：
    1000
    4
 */