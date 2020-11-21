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
题目描述：
    编写程序，输入一个正整数n（1<=n<=10）和n阶方阵a中的元
    素，如果a是上三角矩阵，输出“YES”，否则，输出“NO”。
    上三角矩阵即主对角线以下（不包括主对角线）的元素都为0的
    矩阵，主对角线为从矩阵的左上角至右下角的连线。
    要求定义函数IsUpperTriMatrix()判断矩阵a是否是上三角矩
    阵，如果是返回1，否则返回0。函数原型如下：
    int IsUpperTriMatrix(int a[][N], int n);
输入：
    输入一个正整数n（1<=n<=10）和n阶方阵a中的元素，均为整数。
输出：
    如果a是上三角矩阵，输出“YES”，否则，输出“NO”
示例：
    4
    1 2 3 4
    0 2 2 2
    0 0 3 4
    0 0 0 4 
    YES
 */