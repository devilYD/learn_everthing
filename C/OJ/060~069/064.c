#include <stdio.h>

int main(void)
{
    char ch;

    while (ch = getchar() , ch != '@')
    {
        if (ch >= 'A' && ch <= 'Y')
        {
            ch = ch - 'A' + 'a';
            ch = ch + 1;
            printf("%c", ch);
        }
        else if (ch >= 'a' && ch <= 'y')
        {
            ch = ch + 1;
            printf("%c", ch);
        }
        else if (ch == 'Z' || ch == 'z')
        {
            printf("a");
        }
        else
        {
            printf("%c", ch);
        }
    }
    return 0;
}
/* 
��Ŀ������
    �Ӽ�������һ���ַ�����@��������Ҫ����ܲ������
���룺
    �Ӽ�������һ���ַ���ռһ�У���@������
�����
    ���ռһ��
    ���ܹ���:
    1��������ĸ��ת��ΪСд��
    2��������ĸ'a'��'y'����ת��Ϊ��һ����ĸ��
    3������'z'����ת��Ϊ'a'��
    4�������ַ������ֲ��䡣
���룺
    Kyh520@
�����
    lzi520
 */