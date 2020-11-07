#include <stdio.h>
#include <stdlib.h>
int prime(int i);
int main()
{
    int m, n, i, answer = 0;
    scanf("%d%d", &m, &n);

    for (i = m; i <= n; i++)
    {
        answer = prime(i);
        if (answer == 1)
            printf("%d ", i);
    }
    return 0;
}

int prime(int i)
{
    int x, y;
    if (i == 1)
        return 0;
    y = (int)sqrt(i);
    for (x = 2; x <= y; x++)
    {
        if (i % x == 0)
            return 0;
    }
    return 1;
}

/* 
��Ŀ������
     ��������������m��n�����m��n֮������������� 
    Ҫ�������һ��prime()������һ��main()������prime()����
    �ж�һ������n�Ƿ������������๦����main()������ʵ�֡� 
    int prime(int n) 
    { 
    //�ж�n�Ƿ�Ϊ������ ��nΪ����������������1�����򷵻�0 
    } 
    ����C/C++������ύ������Ҫ�����ͨ������prime������main��
    ��ʵ�֣������ύ�������Ҫ�ύ�����ĳ���
���룺
    ��������������m��n��m<=n���Ҷ���int��Χ�ڡ� 
�����
    ���ռһ�С����m��n֮�������������ÿ��������һ���ո񡣲���
    ���ݱ�֤m��n֮��һ����������
ʾ����
    2 6
    2 3 5
 */