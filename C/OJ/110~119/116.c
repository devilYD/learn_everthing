#include<stdio.h>
void del(int a[], int n, int i);  /*ɾ������a���±�Ϊi��Ԫ��*/
void PrintArr(int a[], int n); /*�������a��ǰn��Ԫ��*/

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
��Ŀ������
    ����һ�������������������A��n��Ԫ�أ�ɾ���±�Ϊi��Ԫ�أ�ʹ
    ���Ա�����������ע�⣬��Ч�±��0��ʼ�� ������������������
    ��ʵ��ɾ��Ԫ�ز������������������
    void del(int a[], int n, int i);//ɾ������a���±�Ϊi��Ԫ��
    void PrintArr(int a[], int n);//�������a��ǰn��Ԫ��
���룺
    ��������У���һ����һ������n(n<10)���ڶ�����n��������������
    ��Ҫɾ��Ԫ�ص��±�i��i>=0��
�����
    ���ɾ���±�Ϊi��Ԫ�غ������Ԫ�أ�����֮���ÿո������
ʾ����
    6
    1 3 5 7 9 11
    3
    1 3 5 9 11
 */