#include <stdio.h>

int main(void)
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == b * b + a * a))
        printf("yes");
    else
        printf("no");

    return 0;
}

/* 
��Ŀ������
    �����������������ж����������������߳��Ƿ��ܹ���һ��ֱ�������Ρ�
���룺
    ����������������
�����
    �ܷ񹹳�ֱ�������Ρ����������yes.�����ܣ������no��
ʾ����
    6 8 10
    yes
 */