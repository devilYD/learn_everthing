#include<stdio.h>

void inverse(int n);

int main(void)
{
    int n;
    scanf("%d",&n);
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
        printf("%4d", num);
    }
    if (n == 1)
    {
        scanf("%d", &num);
        printf("%4d", num);
    }
}

/* 
��Ŀ������
    ����n��1<=n<=10����n�����������������n��������
���룺
    ����n��1<=n<=10����Ȼ������n��������
�����
    ���������n��������ÿ������ռ4�У��Ҷ��롣
ʾ����
    6
    4 5 6 1 2 3
           3   2   1   6   5   4 
 */