#include <stdio.h>

int main(void)
{
    char a, b;

    scanf("%c", &a);

    if (a < 'a')
    {
        printf("%c", a);
    }
    else
    {
        b = a - 'a' + 'A';
        printf("%c", b);
    }

    return 0;
}

/* 
��Ŀ������
    ����һ����ĸ������Сд��ĸ�����Ϊ��д���������ԭ�������
���룺
    ����Ϊһ���ַ���
�����
    ����ĿҪ�����һ���ַ�������ռһ�С�
ʾ����
    a
    A
 */