#include <stdio.h>

void inverse(int n);

int main(void)
{
    int n;
    scanf("%d", &n);
    inverse(n);
    return 0;
}

void inverse(int n)
{
    int num;
    if (n > 1)
    {
        scanf("%d", &num);
        inverse(n - 1);
        printf("%d ", num);
    }
    if (n == 1)
    {
        scanf("%d", &num);
        printf("%d ", num);
    }
}

/* 
题目描述：
    输入n和n个整数，以与输入顺序相反的顺序输出这n个整
    数。要求不使用数组，而使用递归函数实现。
    递归函数实现过程如下：
    void inverse(int n)
    {
        if(n >1)
        {
            (1) 读入一个整数，存入num;
            (2)  将后面的n-1个数逆序输出: inverse(n-1);  
            (3)  输出num；
        }
        if( n == 1)  直接输出num；
    }
输入：
    输入有两行，第一行是一个正整数n，第二行有n个整数，整
    数之间由空格隔开。
输出：
    输出n个整数，顺序与输入顺序相反，每个整数后有一个空格。
示例：
    5
    11 22 33 44 55
    55 44 33 22 11
 */