#include <stdio.h>

int insert(int a[], int n, int num);
void PrintArr(int a[], int n);

int main(void)
{
    int a[1000], num, n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &num);

    insert(a, n, num);
    PrintArr(a, n + 1);

    return 0;
}

int insert(int a[], int n, int num)
{
    int set = num;
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] >= num)
            break;
    }
    for (int t = i; t < n + 1; t++)
    {
        num = a[t];
        a[t] = set;
        set = num;
    }
    return 0;
}
void PrintArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d" + !i, a[i]);
    }
}

/* 
��Ŀ������
    һ���ǵݼ����������������n��Ԫ�أ�����һ����
    ��num����num��������е��ʵ�λ�ã�ʹ�����Ա�
    �ַǵݼ�����Ҫ����һ������insert()������
    ��num����������a���ʵ�λ���ϣ�����ԭ�����£�
    int insert(int a[], int n, int num);
    ���⺯����Ȼ������ǰ������ĺ���PrintArr()���
    ��������Ԫ�ء�
���룺
    ���������С���һ����һ��������n��n<=1000���ڶ���
    ��n���������������Ǵ���������num��
�����
    ����ǵݼ������n+1������������֮���ÿո��������
    ��ռһ�С�
ʾ����
    5
    1 2 4 5 6
    3
    1 2 3 4 5 6
 */