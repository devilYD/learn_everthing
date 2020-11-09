#include <stdio.h>

double CancelFee(double price);

int main(void)
{
    double price;
    scanf("%lf", &price);
    printf("%.1lf", CancelFee(price));
    return 0;
}

double CancelFee(double price)
{
    price = price * 0.05;

    if (price - (int)price >= 0.75)
        price = (int)price + 1;
    else if (price - (int)price >= 0.5)
        price = (int)price + 0.5;
    else if (price - (int)price >= 0.25)
        price = (int)price + 0.5;
    else
        price = (int)price;

    return price;
}

/* 
��Ŀ������
    2013���𣬻�Ʊ��Ʊ�ѱ����µ���Ʊ��˳�վ��
    ��ʱ��ǰ48Сʱ���ϵİ�Ʊ��5%����Ʊ�ѡ�ͬʱ��
    ��Ʊ��Ʊ�ѵļ��㷽�������������뵽ԪΪ��λ��
    ������5��Ϊ��λ��β��С��0.25Ԫ����ȥ����С��
    0.25Ԫ��С��0.75Ԫ�ļ�Ϊ0.5Ԫ����С��0.75Ԫ��
    ��Ϊ1Ԫ����дһ��������������Ʊ�ѣ��ٶ���Ʊʱ
    ���������ʱ����48Сʱ���ϡ�����ԭ�����£�
    double CancelFee(double price);
    ���������C/C++�����ύ��ֻ��Ҫ�ύCancelFee��
    ���Ķ��岿�֣��ύ�������ݣ��������
���룺
    ����һ��ʵ������ʾ��ƱƱ��۸�
�����
    ���һ��ʵ������ʾ��Ʊ�ѣ��������һλС����
ʾ����
    106
    5.5
 */