#include <stdio.h>

int max(int a, int b);

int main(void)
{
    int x, y, z;
    int m, n, b;

    scanf("%d %d %d", &x, &y, &z);

    if (max(x, y) >= z)
    {
        m = max(x, y);
        if (max(x, y) == x)
        {
            n = max(y, z);
            if (max(y, z) == y)
                b = z;
            else
                b = y;
        }
        else
        {
            n = max(x, z);
            if (max(x, z) == x)
                b = z;
            else
                b = x;
        }
    }
    else
    {
        m = max(y, z);
        if (max(y, z) == z)
        {
            n = max(x, y);
            if (max(x, y) == x)
                b = y;
            else
                b = x;
        }
        else
        {
            n = max(x, z);
            if (max(x, z) == x)
                b = z;
            else
                b = x;
        }
    }

    printf("%d %d %d", m, n, b);

    return 0;
}

int max(int a, int b)
{
    if (a >= b)
        return a;
    else
        return b;
}

/* 
��Ŀ������
    �Ӽ���������������x,y��z�����Ӵ�С��˳��������ǵ�ֵ��
���룺
    ������������x,y��z��
�����
    ���Ӵ�С��˳��������ǵ�ֵ��
ʾ����
    20 16 18
    20 18 16
 */