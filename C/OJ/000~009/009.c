#include <stdio.h>
int main(void)
{
    float x, y, z, arry;

    scanf("%f%f%f", &x, &y, &z);

    arry = (x + y + z) / 3;

    printf("%.2f", arry);

    return 0;
}

/* 
��Ŀ������
    ��֪ĳλѧ������ѧ��Ӣ��ͼ�����γ̵ĳɼ�����������ſγ̵�ƽ���֡�
���룺
    ������������������֮���ɿո������
�����
    ���ռһ�У�����һ��ʵ����Ϊ���ſε�ƽ���֣�������λС����
ʾ����
    87 73 93
    84.33
 */