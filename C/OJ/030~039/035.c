#include <stdio.h>

int main(void)
{
    int x = 0;
    int y = 0;

    scanf("%d", &x);

    if (x < -2)
        y = 7 - 2 * x;
    else if (x < 3)
        y = 5 - abs(3 * x + 2);
    else
        y = 3 * x + 4;

    printf("%d", y);

    return 0;
}

/* 
��Ŀ������
    ��֪��y��x�ĺ���,
    ��x<-2ʱ��y=7-2x��
    ��x>=-2,��x<3ʱ��y=5-|3x+2|��
    ��x>=3ʱ��y=3x+4
���룺
    ��������һ������x��
�����
    ���Ϊһ����������x��Ӧ�ĺ���ֵ��
ʾ����
    2
    -3
 */