#include <stdio.h>

int main(void)
{
    int point;

    scanf("%d", &point);

    if (point < 0)
        printf("�������");
    else if (point < 60)
        printf("E");
    else if (point < 80)
        printf("C");
    else if (point < 90)
        printf("B");
    else if (point <= 100)
        printf("A");
    else
        printf("�������");

    return 0;
}

/* 
��Ŀ������
    ����һ���ٷ��Ƴɼ�, ����ݰٷ��Ƴ�
    ��������Ӧ�ĵȼ���ת����ϵ���£�
    90�ּ�����Ϊ��A����80~89Ϊ��B���� 70~
    79Ϊ��C���� 60~69Ϊ��D����60������Ϊ
    ��E����
���룺
    һ���ٷ��Ƴɼ���0~100������)��
�����
    �����Ӧ�ĵȼ���
ʾ����
    100
    A
 */