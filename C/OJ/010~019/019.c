#include <stdio.h>

int main(void)
{
    int x;
    int mony;

    scanf("%d", &x);

    if (x <= 0)
        printf("error");
    else if (x < 30)
        mony = x * 50;
    else
        mony = x * 48;

    printf("%d", mony);
    return 0;
}

/* 
��Ŀ������
    ĳ��԰��Ʊ��Ʊ����ÿ��50Ԫ��һ�ι�Ʊ
    ��30�ţ�ÿ�ſ�������2Ԫ���Ա�д�Զ�
    �Ʒ�ϵͳ����
���룺
    ����һ������������ʾ��Ʊ��������
�����
    ���һ����������ʾ�û�ʵ����Ҫ֧���Ľ�
    �
ʾ����
    30
    1440
 */