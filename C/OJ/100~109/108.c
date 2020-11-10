#include<stdio.h>

void PrintDigit(int m);
void PrintSpace(int m);

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<n;i++){
        PrintDigit(n-i);
        PrintSpace(i);
        PrintDigit(n-i);
        printf("\n");
    }
    for(i=n;i>0;i--){
        PrintDigit(n-i);
        PrintSpace(i);
        PrintDigit(n-i);
        printf("\n");
    }
     
    return 0;
}

void PrintDigit(int m)
{
    while(m--)
    printf(" ");//输出空格
}

void PrintSpace(int m)
{
    int i;
    for(i=1;i<m;i++){
        printf("%d",i);
    }
    for(i=m;i>0;i--){
        printf("%d",i);//输出数字
    }
}

/* 
题目描述：
    从键盘输入一个整数n(1≤n≤9),打印出指定的数字图形。要求在
    程序中定义并调用如下函数：PrintSpace(m)用来输出m个空格；
    PrintDigit(m)来输出一行中的数字串"12...m...21"（该行中
    的最大数字是m）。函数原型如下：
    void PrintDigit(int m);
    void PrintSpace(int m);
    对于C/C++代码的提交，本题要求必须通过定义PrintSpace函数、
    PrintDigit函数和main函数实现，否则，返回编译错误。
输入：
    正整数n（1≤n≤9）。
输出：
    指定数字图形。
示例：
    5
        1
       121
      12321
     1234321
    123454321
     1234321
      12321
       121
        1
 */