#include <stdio.h>
#include <math.h>
int main(void)
{
    float n = 0.0;
    float i = 0.0;
    float sum = 0.0;

    scanf("%f", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + 1 / (2 * i - 1);
    }
    printf("%.2f", sum);
    return 0;
}

/* 
��Ŀ������
    ����һ������n���������1+1/3+1/5+����ǰn��ĺ͡�
���룺
    ����ֻ��һ��������n��
�����
    �������2λС��������ռһ��
ʾ����
    3
    1.53
 */