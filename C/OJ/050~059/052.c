#include <stdio.h>
 
int main(void)
{
    double n,a,a0,sum;
    int i;
     
    scanf("%lf %lf",&n,&a);
    a0 = a;
    for ( i = 0; i < n; i++)
    {
        sum = sum + a;
        a =  a*10 + a0;
    }
 
    printf("%.0f",sum);
     
    return 0;
}

/* 
��Ŀ������
    ����n��a����a+aa+aaa+��aa��a(n��a)���統n=3,a=2ʱ��
    2+22+222�Ľ��Ϊ246
���룺
    ��������������n��a,����������������Լٶ�n��a����С
    ��10�ķǸ�����
�����
    ���ǰn��ͣ�����ռһ��
ʾ����
    3 2
    246
 */