#include<stdio.h>
int fib(int k,int *i);

int main(void )
{
    int n,i=0;
    int *m;
    m=&i;
    scanf("%d", &n);
    n=fib(n,m);
    printf("%d\n",n);
    printf("�ݹ������%d��",i);
    return 0;
}

int fib(int k,int *i)
{
    *i=*i+1;
    if(k == 1 || k == 2)
        return 1;
    else
        return fib(k-1,i) + fib(k-2,i);
}

/* 
��Ŀ������
    ���³���Ĺ����Ǽ��� Fibonacci���еĵ�n�
    ����fib()��һ���ݹ麯���������д�ó��򣬼�
    ���n���ͬʱ��ͳ�Ƶ����˶��ٴκ���fib����
    ��main()��fib()�ĵ��ã���
    #include<stdio.h>
    int fib(int k);

    int main(void )
    {
        int n;
        scanf("%d", &n);
        printf("%d\n", fib(n));  
        return 0;
    }

    int fib(int k)
    {
        if(k == 1 || k == 2)
            return 1;
        else
            return fib(k-1) + fib(k-2);
    }
���룺
    ����һ��������n��
�����
    ����������У���һ����һ����������ʾ��n���ֵ��
    �ڶ�������ݹ�����˶��ٴΣ������ʽ�����������
ʾ����
    20
    6765
    �ݹ������13529��
 */