#include <stdio.h>
#include <math.h>

int main(void)
{
    double s1, s2, key;
    char op;

    scanf("%lf %c %lf", &s1, &op, &s2);

    if (op == '+')
    {
        key = s1 + s2;
        printf("%.2lf", key);
    }
    else if (op == '-')
    {
        key = s1 - s2;
        printf("%.2lf", key);
    }
    else if (op == '*')
    {
        key = s1 * s2;
        printf("%.2lf", key);
    }
    else if (op == '/')
    {
        if (fabs(s2) > 1e-10)
        {
            key = s1 / s2;
            printf("%.2lf", key);
        }
        else
        {
            printf("Wrong input!");
        }
    }
    else
    {
        printf("Wrong input!");
    }

    return 0;
}

/* 
��Ŀ������
    ����һ���򵥵�����������ʽ����������ʵ����һ������
    �������̼�������
���룺
    ���ʽ�ĸ�ʽΪ��s1 op s2�� s1��s2������ʵ����op��ʾ
    ���������(+,-,*,/)��Ҳ�����������ַ�
�����
    ���������Ϸ���������ʽ��ֵ������������Ϸ������
    ��������ʱ������0�������"Wrong input!"�������С
    ���������λ��
ʾ����
    1.0 + 1.0
    2.00
 */