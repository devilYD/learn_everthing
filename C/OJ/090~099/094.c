#include <stdio.h>

int vowel(char ch);

int main(void)
{
    char ch;
    int sum;

    while (ch = getchar(), ch != '\n')
    {
        sum = sum + vowel(ch);
    }
    printf("%d", sum);
    return 0;
}

int vowel(char ch)
{
    if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))
    {
        return 1;
    }
    else if ((ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U'))
    {
        return 1;
    }
    
    else
    {
        return 0;
    }
}

/* 
��Ŀ������
    ����һ���ַ�����ͳ������Ԫ����ĸ�ĸ�����Ҫ��ʹ�ú���
    vowel()�����ж��Ƿ�ΪԪ��,���๦����main()������ʵ�֡� 
    int vowel(char ch)
    {
                 //���ch��Ԫ��������1�����򷵻�0
    }
    ���������C/C++�����ύ��ֻ��Ҫ�ύvowel�����Ķ��岿�֣�
    �ύ�������ݣ��������
���룺
    ����һ���ַ��������Ȳ�����1000���Իس���������
�����
    ���һ����������ʾԪ����ĸ�������������ռһ�С�
ʾ����
    Hello world!
    3
 */