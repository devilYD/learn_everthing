#include <stdio.h>

char max(char a, char b);

int main(void)
{
    char a, b, c, d;

    scanf("%c %c %c", &a, &b, &c);

    d = max(a, b);
    d = max(d, c);

    printf("%c", d);
}

char max(char a, char b)
{
    if (a >= b)
        return a;
    else
        return b;
}

/* 
��Ŀ������
    ��������ASCII�ַ�(�����հ��ַ�:�����ո�
    �Ʊ��\t���س����з�\n)���ҳ�����������
    ��
���룺
    ������������ַ���֮����һ���ո������
�����
    ���ASCII�������Ǹ��ַ���ռһ�С�
ʾ����
    a b c
    c
 */