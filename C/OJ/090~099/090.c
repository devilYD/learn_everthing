#include <stdio.h>

int main(void)
{
    int n, a, b;
    int sum;
    int c;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        sum = 1;
        scanf("%d %d", &a, &b);
        for (int i = 0; i < b; i++)
        {
            sum = sum * a;
            while(sum>999)
            {
                sum=sum%1000;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}

/* 
��Ŀ������
    ��A^B�������λ����ʾ��������1<=A,B<=1000��
���룺
    ��һ������һ������n����ʾ��n������ʵ��������
    ��n�У�ÿ��һ��ʵ������������������A,B
�����
    ���ÿ������ʵ�������A^B�������λ��û��ǰ
    ��0�� ������ռһ�С�
ʾ����
    2
    2 3
    8
    12 6
    984
 */