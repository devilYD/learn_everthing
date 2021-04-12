#include<stdlib.h>

int *sieve(int N)
{
    int *IsPrime = (int *)malloc(N*sizeof(int));
    for (int i = 0; i < N; i++)
    {
        IsPrime[i] = 1;
    }
    IsPrime[0] = 0;
    IsPrime[1] = 0;
    for (int i = 2; i < N; i++)
    {
        if (IsPrime[i] == 1)
            for (int j = i*2; j < N; j = j+i)
                IsPrime[j] = 0;
    }
    
    return IsPrime;
}