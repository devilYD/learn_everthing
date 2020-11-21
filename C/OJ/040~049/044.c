#include<stdio.h>
 
int main(void)
{
    int i,a,b,c;
    double w;
    c = 0;
 
    scanf("%d",&a);
 
    for (size_t i = 0; i < a; i++)
    {
        scanf("%d",&b);
         
        if (b <= 60)
        {
            c = c + 1;
        }
    }
     
    w = (double)c / (double)a;
 
    printf("%.2f",w);
     
    return 0;
}

/* 
题目描述：
    输入n和n个学生成绩(实数），输出不及格率。
输入：
    输入的第一行是一个整数n，第二行是n个实数，用空格隔开。
输出：
    输出一个实数，表示不及格率，结果保留2位小数，单独占一行。
示例：
    8
    98  45 86 79 56 75 90 70
    0.25
 */