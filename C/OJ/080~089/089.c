#include <stdio.h>

int main()
{
    double multiply,m;
    int n,i;
    multiply=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        multiply=i*multiply;
        for(;multiply>=10;)
            multiply/=10;
    }
    printf("%d\n",(int)multiply);
    return 0;
}

/* 
��Ŀ������
    ����һ��������n�����n!�����λ�ϵ����֡�
���룺
    ����һ��������n��n������1000����
�����
    ���n!�����λ�ϵ����֡�
ʾ����
    1000
    4
 */