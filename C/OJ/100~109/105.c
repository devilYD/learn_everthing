#include <stdio.h>
int facsum(int n);

int main(void)
{
    int m, n;
    int s = 0;
    scanf("%d %d", &m, &n);
    for (int i = m; i < n; i++)
    {
        for (int t = i; t < n; t++)
        {
            if (facsum(i) == facsum(t))
            {
                printf("%d %d\n", i, t);
                s = s + 1;
            }
        }
    }
    if (s == 0)
        printf("No answer");

    return 0;
}

int facsum(int n)
{
    int i, sum = 1;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}