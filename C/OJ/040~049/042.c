#include<stdio.h>
#include<math.h>
int main(void)
{
    float n=0.0;
    float i=0.0;
    float sum = 0.0;
  
    scanf("%f",&n);
  
    for ( i = 1; i <= n; i++)
    {
        sum = sum + i/(2*i-1)*pow(-1,i-1);
    }
    printf("%.3f",sum);
    return 0;
}

/* 
��Ŀ������
    ��1-2/3+3/5-4/7+5/9-6/11+...��ǰn��ͣ��������3λС����
���룺
    ����������n(n>0)��
�����
    ���һ��ʵ��������3λС��������ռһ�С�
ʾ����
    5
    0.917
 */