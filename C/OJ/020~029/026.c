#include <stdio.h>

int main(void)
{
    char a;

    scanf("%c", &a);

    if (a >= 'A' && a <= 'Z')
        printf("upper");
    else if (a >= 'a' && a <= 'z')
        printf("lower");
    else if (a >= '0' && a <= '9')
        printf("digit");
    else
        printf("other");

    return 0;
}

/* 
��Ŀ������
    �Ӽ�������һ���ַ����жϸ��ַ��Ƿ��д��ĸ��С
    д��ĸ�������ַ��������ַ����ֱ������Ӧ����ʾ
    ��Ϣ��
���룺
    ����һ���ַ���
�����
    ������ַ��Ǵ�д��ĸ���������upper��������Сд��
    ĸ���������lower�������������ַ����������digit����
    ���������ַ����������other�������������˫���ţ���
ʾ����
    1
    digit
 */