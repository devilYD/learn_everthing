#include <stdio.h>

int main(void)
{
    char a[3];
    char min;
    int n;

    while (scanf("%s", a) != EOF)
    {
        for (int i = 0; i < 3; i++)
        {
            min = '~';
            for (int i = 0; i < 3; i++)
            {
                if (min >= a[i])
                {
                    min = a[i];
                    n = i;
                }
            }
            printf(" %c" + !i, min);
            a[n] = '~';
            n = 0;
        }
        printf("\n");
    }

    return 0;
}

/* 
��Ŀ������
    ���������ַ��󣬰����ַ���ASCII���С�����˳������������ַ���
���룺
    ���������ж��飬ÿ��ռһ�У��������ַ���ɣ�֮���޿ո�
�����
    ����ÿ���������ݣ����һ�У��ַ��м���һ���ո�ֿ���
ʾ����
    qwe
    e q w
    asd
    a d s
    zxc
    c x z
 */