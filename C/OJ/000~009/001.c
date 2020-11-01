#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, fenpei ,yuxia ;

    scanf("%d %d", &m, &n);
    fenpei = m / n;
    yuxia = m % n;

    printf("%d %d\n", fenpei, yuxia);
    return 0;
}

/* 
题目描述：
    某学校植树节开展植树活动，已知树苗有m株，参加植树的同学
    有n人（且m>n），请问每位同学平均可以植树几株？还有几株
    剩余？

输入：
    输入两个整数m和n，分别表示树苗的数量和学生的人数（m>n）。

输出：
    输出两个整数，分别表示每位同学平均植树的数量及剩余的树苗
    数量。

示例：
    163 32
    5 3
 */