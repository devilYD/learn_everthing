#include <stdio.h>

int main(void)
{
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    printf("%d %d %d %d %d", num1 + num2, num1 - num2, num1 * num2, num1 / num2, num1 % num2);

    return 0;
}
/* 
��Ŀ������
    ������������num1��num2���������һ�����򣬼��㲢������ǵ�
    �͡�����������̼�������

���룺
    ����ֻ������������num1��num2��

�����
    ���ռһ�У������������ĺ͡�������̼�����������֮����һ��
    �ո������

ʾ����
    1 2
    3 -1 2 0 1

 */