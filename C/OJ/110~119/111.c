#include <stdio.h>

void inverse(int n);

int main(void)
{
    int n;
    scanf("%d", &n);
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
        printf("%d ", num);
    }
    if (n == 1)
    {
        scanf("%d", &num);
        printf("%d ", num);
    }
}

/* 
��Ŀ������
    ����n��n����������������˳���෴��˳�������n����
    ����Ҫ��ʹ�����飬��ʹ�õݹ麯��ʵ�֡�
    �ݹ麯��ʵ�ֹ������£�
    void inverse(int n)
    {
        if(n >1)
        {
            (1) ����һ������������num;
            (2)  �������n-1�����������: inverse(n-1);  
            (3)  ���num��
        }
        if( n == 1)  ֱ�����num��
    }
���룺
    ���������У���һ����һ��������n���ڶ�����n����������
    ��֮���ɿո������
�����
    ���n��������˳��������˳���෴��ÿ����������һ���ո�
ʾ����
    5
    11 22 33 44 55
    55 44 33 22 11
 */