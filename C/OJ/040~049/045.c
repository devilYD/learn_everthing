#include <stdio.h>
#include <math.h>

int main(void)
{
    int i, a, b;
    int x = 0, y = 0, z = 0;

    scanf("%d", &a);

    for (size_t i = 0; i < a; i++)
    {
        scanf("%d", &b);

        if (b < 0)
            x = x + 1;
        else if (b > 0)
            y = y + 1;
        else
            z = z + 1;
    }

    printf("%d %d %d", x, z, y);

    return 0;
}

/* 
��Ŀ������
    ͳ�Ƹ�����n�����У���������������ĸ�����
���룺
    ����ĵ�һ����������n��n<100������ʾ��Ҫͳ�Ƶ���ֵ�ĸ�����
    Ȼ����n������ 
�����
    ���һ��a,b��c���ֱ��ʾ�����������и�������������ĸ�����
ʾ����
    6 0 1 2 3 -1 0
    1 2 3
 */