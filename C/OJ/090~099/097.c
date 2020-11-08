#include <stdio.h>

int getScore(char g);

int main(void)
{
    char a;
    float num = 0, i = 0;
    float asw;

    while (scanf("%c", &a) != EOF)
    {
        num = num + getScore(a);
        i++;
    }
    asw = num / (i - 1);
    printf("%.1f", asw);
    return 0;
}

int getScore(char g)
{
    if (g == 'A')
    {
        return 95;
    }
    else if (g == 'B')
    {
        return 85;
    }
    else if (g == 'C')
    {
        return 75;
    }
    else if (g == 'D')
    {
        return 65;
    }
    else if (g == 'E')
    {
        return 40;
    }
    else
    {
        return 0;
    }
}

/* 
��Ŀ������
    ����ĳλͬѧ���ſεĳɼ������ƽ���ɼ�������ĳɼ�
    ��Ϊ�弶�Ƴɼ����弶�Ƴɼ�ת��Ϊ�ٷ�֮�ɼ��Ĺ�����
    �£�'A'ת��Ϊ�ٷ�֮�ɼ�Ϊ95�֣�'B'��Ӧ85�֣�C��Ӧ
    75�֣�'D'��Ӧ65�֣�'E'��Ӧ40�֡� �����ƽ���ɼ�Ϊ
    һ��ʵ��������1λС���� Ҫ�������һ��getScore()
    ������һ��main()������getScore()��������һ���ȼ�
    ��Ӧ�ķ��������๦����main()������ʵ�֡�
    int getScore(char g)
    { 
    //�ѵȼ�gת���ɶ�Ӧ�ķ������������������ 
    }
    ����C/C++������ύ������Ҫ�����ͨ������getScore
    ������main����ʵ�֣������ύ�������Ҫ�ύ����
    �ĳ���
���룺
    ����Ϊһ��ֻ����'A'~'E'����ĸ��ÿ����ĸ��ʾһ�ſ�
    �ĳɼ���
�����
    ���ƽ���ɼ���Ϊһ��ʵ��������һλС����
ʾ����
    AABB
    90.0
 */