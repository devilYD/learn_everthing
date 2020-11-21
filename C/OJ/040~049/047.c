#include<stdio.h>
#include<math.h>
  
int main(void)
{
    int i,a,b;
    double e;
  
    scanf("%d %d",&a,&b);
  
    for (size_t i = a; i <= b; i++)
    {
        e = log((double)i);
        printf("%4d%8.4f\n",i,e);
    }
      
    return 0;
}

/* 
题目描述：
    输入两个正整数m和n，输出m到n之间每个整数的自然对数。
输入：
    输入包括两个整数m和n(m<=n)，之间用一个空格隔开。
输出：
    每行输出一个整数及其对数，整数占4列，对数占8列，右对齐，
    对数保留4位小数。
示例：
    2 4
        2  0.6931
        3  1.0986
        4  1.3863
 */