#include <stdio.h>

int main(void)
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a) && (a - b < c) && (a - c < b) && (b - c < a) && (b - a < c) && (c - a < b) && (c - b < a))
        printf("Yes");
    else
        printf("No");

    return 0;
}

/* 
��Ŀ������
    �����������������ж����������������߳��Ƿ��ܹ���һ�������Ρ�
���룺
    ����Ϊ����int��Χ�����������м���һ���ո������
�����
    ����ܹ��������Σ����"Yes"���������"No"
ʾ����
    3 4 5
    Yes
 */