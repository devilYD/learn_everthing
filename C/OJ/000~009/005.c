#include <stdio.h>

int main(void)
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    printf("%-9d%-9d%-9d\n", a, a * a, a * a * a);
    printf("%-9d%-9d%-9d\n", b, b * b, b * b * b);
    printf("%-9d%-9d%-9d\n", c, c * c, c * c * c);

    return 0;
}

/* 
问题描述：
    输入3个整数，输出它们的1次幂、2次幂和3次幂。

输入：
    输入3整数，用空格隔开。

输出：
    输出3行，每行3个整数，分别是它们的1次幂、2次
    幂和3次幂，每个整数占9列，不足9列左对齐。

示例：
    1 5 100
    1        1        1        
    5        25       125      
    100      10000    1000000  
 */