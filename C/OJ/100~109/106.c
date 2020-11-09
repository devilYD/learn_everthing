#include <stdio.h>
#include <math.h>

int inverse(int n);

int main()
{
    int n, m, a, b;
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        m = inverse(i);
        if (m == i)
            printf("%d ", i);
    }
}

int inverse(int n)
{
    int i = 0, j = 0, b[10], sum = 0, c, x;
    while (n > 0)
    {
        x = n % 10;
        i++;
        ++j;
        b[i] = x;
        n = n / 10;
    }
    j -= 1;
    for (int k = 1; k <= i; k++, j--)
    {
        c = b[k] * pow(10, j);
        sum += c;
    }
    return sum;
}

/* 
题目描述：
    一个正整数，如果从左向 右读（称之为正序数）和从右向
    左读（称之为倒序数）是一样的，这样的数就叫回文数。输
    入两个整数m和n（m<n)，输出区间[m，n]之间的回文数。
输入：
    输入两个正整数m和n，输入保证m<n。
输出：
    按从小到大的顺序，输出m到n之间的回文数，每个数后面有
    一个空格。
示例：
    100 200
    101 111 121 131 141 151 161 171 181 191 
 */