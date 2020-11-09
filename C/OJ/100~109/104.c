#include <stdio.h>

int FacSum(int n);

int main()
{
    int n, sum;
    scanf("%d", &n);
    sum = FacSum(n);
    printf("%d", sum);
    return 0;
}

int FacSum(int n)
{
    int i, sum = 1;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}

/* 
��Ŀ������
    ����������n��2<=n<=1000�������㲢���n����������
    ��(����1������������)֮�͡�Ҫ�������һ��FacSum ()
    ������һ��main()������FacSum ()�������㲢����n��
    ����������֮�ͣ����๦����main()������ʵ�֡�
    int FacSum(int n)
    {
    //����n������������(����1������������)֮��sum������������sum 
    }
���룺
    ����������n��2<=n<=1000����
�����
    ���n������������(����������)֮�͡�
ʾ����
    1000
    1340
 */