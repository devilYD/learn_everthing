#include<stdio.h>
void del(int a[], int n, int i);  /*删除数组a中下标为i的元素*/
void PrintArr(int a[], int n); /*输出数组a的前n个元素*/

int main(void)
{
    int a[1000];
    int n,i;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&i);
    del(a,n,i);
    PrintArr(a,n-1);
}

void del(int a[], int n, int i)
{
    for (int t = i; t < n; t++)
    {
        a[t]=a[t+1];
    }
}
void PrintArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d"+!i,a[i]);
    }
}

/* 
题目描述：
    输入一个递增有序的整型数组A有n个元素，删除下标为i的元素，使
    其仍保持连续有序。注意，有效下标从0开始。 定义如下两个函数分
    别实现删除元素操作和数组输出操作。
    void del(int a[], int n, int i);//删除数组a中下标为i的元素
    void PrintArr(int a[], int n);//输出数组a的前n个元素
输入：
    输入分三行，第一行是一个整数n(n<10)，第二行是n个整数，第三行
    是要删除元素的下标i，i>=0。
输出：
    输出删除下标为i的元素后的数组元素，数据之间用空格隔开。
示例：
    6
    1 3 5 7 9 11
    3
    1 3 5 9 11
 */