#include<stdio.h>
void del(int a[], int n, int i);
void pp(int a[],int n);
int find(int a[], int n, int x);

int main(void)
{
    int a[1000];
    int N;
}

void pp(int a[],int n)
{
    int tem;
    for (int i = 0; i < n-1; i++)
    {
        for (int t = 0; t < n-i-1; t++)
        {
            if (a[t]>a[t+1])
            {
                tem=a[t];
                a[t]=a[t+1];
                a[t+1]=tem;
            }
        }
    }
}
void del(int a[], int n, int i)
{
    for (int t = i; t < n; t++)
    {
        a[t] = a[t + 1];
    }
}
int find(int a[], int n, int x)
{
    int t = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
            t = i;
        if (t != -1)
            break;
    }
    return t;
}