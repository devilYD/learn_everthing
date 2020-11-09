#include <stdio.h>
#include <math.h>

int inverse(int n);

int main()
{
    int n, m, a, b;
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        m = inverse(i);
        if (m == i)
            printf("%d ", i);
    }
}

int inverse(int n)
{
    int i = 0, j = 0, b[10], sum = 0, c, x;
    while (n > 0)
    {
        x = n % 10;
        i++;
        ++j;
        b[i] = x;
        n = n / 10;
    }
    j -= 1;
    for (int k = 1; k <= i; k++, j--)
    {
        c = b[k] * pow(10, j);
        sum += c;
    }
    return sum;
}

/* 
��Ŀ������
    һ������������������� �Ҷ�����֮Ϊ���������ʹ�����
    �������֮Ϊ����������һ���ģ����������ͽл���������
    ����������m��n��m<n)���������[m��n]֮��Ļ�������
���룺
    ��������������m��n�����뱣֤m<n��
�����
    ����С�����˳�����m��n֮��Ļ�������ÿ����������
    һ���ո�
ʾ����
    100 200
    101 111 121 131 141 151 161 171 181 191 
 */