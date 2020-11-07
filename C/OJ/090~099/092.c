#include <stdio.h>
#include <stdlib.h>
int prime(int i);
int main()
{
    int m, n, i, answer = 0;
    scanf("%d%d", &m, &n);

    for (i = m; i <= n; i++)
    {
        answer = prime(i);
        if (answer == 1)
            printf("%d ", i);
    }
    return 0;
}

int prime(int i)
{
    int x, y;
    if (i == 1)
        return 0;
    y = (int)sqrt(i);
    for (x = 2; x <= y; x++)
    {
        if (i % x == 0)
            return 0;
    }
    return 1;
}

/* 
题目描述：
     输入两个正整数m和n，输出m和n之间的所有素数。 
    要求程序定义一个prime()函数和一个main()函数，prime()函数
    判断一个整数n是否是素数，其余功能在main()函数中实现。 
    int prime(int n) 
    { 
    //判断n是否为素数， 若n为素数，本函数返回1，否则返回0 
    } 
    对于C/C++代码的提交，本题要求必须通过定义prime函数和main函
    数实现，否则，提交编译错误，要提交完整的程序。
输入：
    输入两个正整数m和n，m<=n，且都在int范围内。 
输出：
    输出占一行。输出m和n之间的所有素数，每个数后有一个空格。测试
    数据保证m到n之间一定有素数。
示例：
    2 6
    2 3 5
 */