#include <stdio.h>
#include <math.h>

int main(void)
{
    double iteam, n, sum;
    int i;

    scanf("%lf %lf", &iteam, &n);
    sum = iteam;
    for (i = 1; i < n; i++)
    {
        iteam = sqrt(iteam);
        sum = sum + iteam;
    }

    printf("%.2f", sum);

    return 0;
}

/* 
��Ŀ������
    ���еĶ������£�
    ���еĵ�һ��Ϊitem���Ժ����Ϊǰһ���ƽ�����������е�ǰn��ĺ͡�
���룺
    ����������item��item<10000����n(n<1000)��ɣ�item��n�ĺ�����ǰ
    ������
�����
    ��������еĺͣ�ռһ�У�Ҫ�󾫶ȱ���2λС����
ʾ����
    84 4
    97.93
 */