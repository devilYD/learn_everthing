#include <stdio.h>

int main(void)
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    printf("%-9d%-9d%-9d\n", a, a * a, a * a * a);
    printf("%-9d%-9d%-9d\n", b, b * b, b * b * b);
    printf("%-9d%-9d%-9d\n", c, c * c, c * c * c);

    return 0;
}

/* 
����������
    ����3��������������ǵ�1���ݡ�2���ݺ�3���ݡ�

���룺
    ����3�������ÿո������

�����
    ���3�У�ÿ��3���������ֱ������ǵ�1���ݡ�2��
    �ݺ�3���ݣ�ÿ������ռ9�У�����9������롣

ʾ����
    1 5 100
    1        1        1        
    5        25       125      
    100      10000    1000000  
 */