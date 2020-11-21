#include <stdio.h>
int pp(int arr[], int low, int high);

int main(void)
{
    int m, a[2000000], c = 0;
    rewind(stdin);

    for (int i = 0; i < 2; i++)
    {
        scanf("%d", &m);
        for (int i = c; i < c + m; i++)
        {
            scanf("%d", &a[i]);
        }
        c = c + m;
    }

    pp(a, 0, c - 1);

    for (int i = c - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

int pp(int arr[], int low, int high)
{
    if (low < high)
    {
        int i = low;
        int j = high;
        int k = arr[low];
        while (i < j)
        {
            while (i < j && arr[j] >= k)
            {
                j--;
            }

            if (i < j)
                arr[i++] = arr[j];

            while (i < j && arr[i] < k)
            {
                i++;
            }

            if (i < j)
                arr[j--] = arr[i];
        }

        arr[i] = k;

        // �ݹ����
        pp(arr, low, i - 1);  // ����k���
        pp(arr, i + 1, high); // ����k�ұ�
    }
}

/* 
��Ŀ������
    ��֪����a����m�������������е�Ԫ�أ�����b����n���������е�
    Ԫ�أ���̽�a��b�е�����Ԫ�ذ������������c�С�
���룺
    ���������У���һ��������һ��������m��Ȼ����m���������ڶ���
    ������һ��������n��Ȼ����n��������m, n��С�ڵ���1000000��
�����
    ����ϲ����m+n������������֮���ÿո���������ռһ�С�
ʾ����
    4 1 2 5 7
    3 6 4 2
    7 6 5 4 2 2 1
 */