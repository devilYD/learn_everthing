#include <stdio.h>

double funF(double x);
double funG(double x);

int main(void)
{
    double x;
    scanf("%lf", &x);
    printf("%.2lf", funF(funG(x)));
    return 0;
}

double funF(double x)
{
    if (x - 3 > 0)
    {
        if (x + 1 > 0)
        {
            return 2 * x - 2;
        }
        else
        {
            return -4;
        }
    }
    else
    {
        if (x + 1 > 0)
        {
            return 4;
        }
        else
        {
            return 2 - 2 * x;
        }
    }
}

double funG(double x)
{
    return x * x - 3 * x;
}

/* 
��Ŀ������
    �󸴺Ϻ���F(G(x))�����к���F(x)=|x-3|+|x+1|��
    ����G(x)=x^2-3x��Ҫ���д����funF()��funG()��
    ����F(x)��G(x)�����๦����main()��ʵ�֡�
    double funF(double x)
    {
    //��������F(x)��ֵ��
    }
    double funG(double x)
    {
    //��������G(x)��ֵ��
    }
    ���������C/C++�����ύ��ֻ��Ҫ�ύfunF��funG��
    ���Ķ��岿�֣��ύ�������ݣ��������
���룺
    ����һ��ʵ��x��
�����
    ������Ϻ�����ֵ���������2λС�������ռһ�С�
ʾ����
    10.2
    144.88
 */