#include <stdio.h>
 
int main(void)
{
    double n,a,a0,sum;
    int i;
     
    scanf("%lf %lf",&n,&a);
    a0 = a;
    for ( i = 0; i < n; i++)
    {
        sum = sum + a;
        a =  a*10 + a0;
    }
 
    printf("%.0f",sum);
     
    return 0;
}

/* 
题目描述：
    输入n和a，求a+aa+aaa+…aa…a(n个a)，如当n=3,a=2时，
    2+22+222的结果为246
输入：
    包含两个整数，n和a,含义如上述，你可以假定n和a都是小
    于10的非负整数
输出：
    输出前n项和，单独占一行
示例：
    3 2
    246
 */