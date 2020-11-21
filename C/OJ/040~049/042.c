#include<stdio.h>
#include<math.h>
int main(void)
{
    float n=0.0;
    float i=0.0;
    float sum = 0.0;
  
    scanf("%f",&n);
  
    for ( i = 1; i <= n; i++)
    {
        sum = sum + i/(2*i-1)*pow(-1,i-1);
    }
    printf("%.3f",sum);
    return 0;
}

/* 
题目描述：
    求1-2/3+3/5-4/7+5/9-6/11+...的前n项和，结果保留3位小数。
输入：
    输入正整数n(n>0)。
输出：
    输出一个实数，保留3位小数，单独占一行。
示例：
    5
    0.917
 */