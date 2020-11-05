#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <assert.h>

int main(void)
{
    int T, n, a, sum=0;
    int adress = 0;
    char *write_dowm = malloc(1024);

    memset(write_dowm, 0, 1024);

    scanf("%d", &T);

    for (size_t i = 0; i < T; i++)
    {
        scanf("%d", &n);
        for (size_t i = 0; i < n; i++)
        {
            scanf("%d", &a);
            sum = sum + a;
        }
        adress = adress + sprintf(write_dowm + adress, "%d\n", sum);
        sum = 0;
    }

    assert(adress < 1024);

    printf(write_dowm);

    free(write_dowm);

    return 0;
}

/* 
题目描述：
    求n个整数的和。
输入：
    输入第一行是一个整数T，表示有T组测试实例；
    每组输入包括两行：
    第一行一个数n表示接下来会有n个整数；
    第二行空格隔开的n个数。 
输出：
    对于每组输入，在一行输出n个数的和（保证和不会超出int类型的范围）
示例：
    2
    3
    1 2 3
    4
    -1 0 -19 22
    6
    2
 */

/* 使用了c语言缓冲区*/