#include <stdio.h>

void del(int a[], int n, int i);
void PrintArr(int a[], int n);
int find(int a[], int n, int x);

int main(void)
{
    int n, a[10], x, t;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);
    t = find(a, n, x);
    if (t == -1)
        printf("Not Found");
    else
    {
        del(a, n, t);
        PrintArr(a, n - 1);
    }
    return 0;
}

void del(int a[], int n, int i)
{
    for (int t = i; t < n; t++)
    {
        a[t] = a[t + 1];
    }
}
void PrintArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }
}
int find(int a[], int n, int x)
{
    int t = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
            t = i;
        if (t != -1)
            break;
    }
    return t;
}

/* 
��Ŀ������
    ����n����������һ�����飬����������в���x�Ƿ���ڣ�
    ������ڣ�ɾ��x�������ɾ��Ԫ�غ�����顣��������ڣ�
    �����Not Found��������һ�����Һ���find(),������a��
    ����x�����Ҳ�����������-1�����ҵ�����x���±꣬����
    ԭ�����£�
    int find(int a[], int n, int x);
    Ȼ����main()�У��ȵ��ú���find(),������ʧ�������No
    t Found"�������ҳɹ����������һ���ж���ĺ���del()
    ɾ����Ԫ�أ��ٵ�����һ���е�PrintArr()���ɾ��Ԫ��
    �����������
���룺
    �����һ����һ��������n��1<=n<=10����
    �ڶ�����n������������һ�����飻
    ��������һ������x����ʾ������Ԫ�ء�
�����
    ���ɾ��Ԫ�غ�����飬ÿ��Ԫ��ռ4�У��Ҷ��롣�������
    �ڣ������Not Found��������������ж��x��ֻɾ���±���
    С���Ǹ���
ʾ����
    6
    3 6 2 4 7 9
    4
       3   6   2   7   9
 */