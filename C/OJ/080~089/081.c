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
��Ŀ������
    ��n�������ĺ͡�
���룺
    �����һ����һ������T����ʾ��T�����ʵ����
    ÿ������������У�
    ��һ��һ����n��ʾ����������n��������
    �ڶ��пո������n������ 
�����
    ����ÿ�����룬��һ�����n�����ĺͣ���֤�Ͳ��ᳬ��int���͵ķ�Χ��
ʾ����
    2
    3
    1 2 3
    4
    -1 0 -19 22
    6
    2
 */

/* ʹ����c���Ի�����*/