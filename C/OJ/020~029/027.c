#include <stdio.h>

int main(void)
{
    int num;
    int h, t, p; //百位，十位，个位

    scanf("%d", &num);

    if ((num < 100) && (num > 999))
    {
        printf("输入错误");
    }
    else
    {
        p = num % 10;
        t = (num % 100 - p) / 10;
        h = (num - 10 * t - p) / 100;
    }

    if (num == p * p * p + h * h * h + t * t * t)
        printf("yes");
    else
        printf("no");

    return 0;
}

/* 
题目描述：
    春天是鲜花的季节，水仙花就是其中最迷人的代表，数学上
    有个水仙花数，他是这样定义的：“水仙花数”是指一个三位
    数，它的各位数字的立方和等于其本身，比如：153=13+53+33。
    现在要求输入一个三位数，判断该数是否是水仙花数，如果
    是，输出“yes”，否则输出“no” 
输入：
    输入一个三位的正整数。
输出：
    输出“yes”或“no”。
示例：
    153
    yes
 */