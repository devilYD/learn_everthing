#include<stdio.h>

int main(void)
{
    int t;
    int N, n, c = 0;
    int adress = 0;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &N);
        for (int i = 1; i <= N; i++)
        {
            n = i;
            while (n != 0)
            {
                if (n % 10 == 7)
                {
                    n = 0;
                    c = 1;
                }
                else
                {
                    n = n / 10;
                }
            }

            if (c != 0)
            {
                printf("%d ",i);
            }
            else if (i % 7 == 0)
            {
                printf("%d ",i);
            }
            c = 0;
        }
        printf("\n");
    }
    return 0;
}

/* 
题目描述：
    输出7和7的倍数，还有包含7的数字例如（17，27，37...70，71，72，73...）
输入：
    首先输入一个整数t，表示有t组数据。
    然后有t行，每行一个整数N。(N不大于30000)
输出：
    对于每组数据 ，输出从小到大排列的不大于N的与7有关的数字。
    每组数据占一行，每个数字后面有一个空格；
示例：
    2
    20
    30
    7 14 17 
    7 14 17 21 27 28 
 */