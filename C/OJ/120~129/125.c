#include <stdio.h>
int IsUpperTriMatrix(int a[][1000] , int n);

int main(void)
{
    int ans[1000][1000];
    int n;
    

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for (int t = 0; t < n; t++)
            scanf("%d", &ans[i][t]);

    if (IsUpperTriMatrix(ans, n))
        printf("YES");
    else
        printf("NO");

    return 0;
}

int IsUpperTriMatrix(int a[][1000], int n)
{
    int ans = 1;
    for (int i = 1; i < n; i++)
    {
        for (int t = 0; t < i; t++)
        {
            if (a[i][t] != 0)
                ans = 0;
        }
    }
    return ans;
}

/* 
��Ŀ������
    ��д��������һ��������n��1<=n<=10����n�׷���a�е�Ԫ
    �أ����a�������Ǿ��������YES�������������NO����
    �����Ǿ������Խ������£����������Խ��ߣ���Ԫ�ض�Ϊ0��
    �������Խ���Ϊ�Ӿ�������Ͻ������½ǵ����ߡ�
    Ҫ���庯��IsUpperTriMatrix()�жϾ���a�Ƿ��������Ǿ�
    ������Ƿ���1�����򷵻�0������ԭ�����£�
    int IsUpperTriMatrix(int a[][N], int n);
���룺
    ����һ��������n��1<=n<=10����n�׷���a�е�Ԫ�أ���Ϊ������
�����
    ���a�������Ǿ��������YES�������������NO��
ʾ����
    4
    1 2 3 4
    0 2 2 2
    0 0 3 4
    0 0 0 4 
    YES
 */