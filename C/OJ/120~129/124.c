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

        // 递归调用
        pp(arr, low, i - 1);  // 排序k左边
        pp(arr, i + 1, high); // 排序k右边
    }
}

/* 
题目描述：
    已知数组a中有m个按升序序排列的元素，数组b中有n个降序排列的
    元素，编程将a与b中的所有元素按降序存入数组c中。
输入：
    输入有两行，第一行首先是一个正整数m，然后是m个整数；第二行
    首先是一个正整数n，然后是n个整数，m, n均小于等于1000000。
输出：
    输出合并后的m+n个整数，数据之间用空格隔开。输出占一行。
示例：
    4 1 2 5 7
    3 6 4 2
    7 6 5 4 2 2 1
 */