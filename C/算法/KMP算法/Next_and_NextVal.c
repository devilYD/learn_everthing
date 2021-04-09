#include <stdio.h>

void Getnext(int next[], char *t, int L)
{
    int j = 0, k = -1;
    next[0] = -1;
    while(j<(L-1))
    {
        if (k == -1 || t[j] == t[k])
        {
            j++;
            k++;
            next[j] = k;
        }
        else
            k = next[k];
    }
}
void Getnextval(int nextval[],char *t,int L)
{
    int j = 0, k = -1;
    nextval[0] = -1;
    while(j<(L-1))
    {
        if (k == -1 || t[j] == t[k])
        {
            j++;
            k++;
            if (t[j] != t[k])
                nextval[j] = k;
            else
                nextval[j] = nextval[k];
        }
        else
            k = nextval[k];
    }
}

int main(void)
{
    char String[100],C;
    int L=0, Next[100],Nextval[100];

    while (scanf("%c",&C) && C != '\n')
    {
        String[L] = C;
        L = L + 1;
    } 
    Getnext(Next, String, L);
    Getnextval(Nextval, String, L);
    for (int i = 0; i < L; i++)
    {
        printf("%d ", Next[i]+1);
    }
    printf("\n");
    for (int i = 0; i < L; i++)
    {
        printf("%d ", Nextval[i]+1);
    }
    return 0;
}