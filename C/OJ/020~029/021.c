#include <stdio.h>

int main(void)
{
    int x, y, z;
    int m;

    scanf("%d %d %d", &x, &y, &z);

    if (x >= y)
        m = x;
    else
        m = y;

    if (m >= z)
        m = m;
    else
        m = z;

    printf("%d", m);

    return 0;
}

/* 
��Ŀ������
    �Ӽ���������������x,y��z�����������������
���룺
    ���������������ÿո������
�����
    ������������
ʾ����
    20 16 18
    20
 */