#include<stdio.h>

void PrintDigit(int m);
void PrintSpace(int m);

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<n;i++){
        PrintDigit(n-i);
        PrintSpace(i);
        PrintDigit(n-i);
        printf("\n");
    }
    for(i=n;i>0;i--){
        PrintDigit(n-i);
        PrintSpace(i);
        PrintDigit(n-i);
        printf("\n");
    }
     
    return 0;
}

void PrintDigit(int m)
{
    while(m--)
    printf(" ");//����ո�
}

void PrintSpace(int m)
{
    int i;
    for(i=1;i<m;i++){
        printf("%d",i);
    }
    for(i=m;i>0;i--){
        printf("%d",i);//�������
    }
}

/* 
��Ŀ������
    �Ӽ�������һ������n(1��n��9),��ӡ��ָ��������ͼ�Ρ�Ҫ����
    �����ж��岢�������º�����PrintSpace(m)�������m���ո�
    PrintDigit(m)�����һ���е����ִ�"12...m...21"��������
    �����������m��������ԭ�����£�
    void PrintDigit(int m);
    void PrintSpace(int m);
    ����C/C++������ύ������Ҫ�����ͨ������PrintSpace������
    PrintDigit������main����ʵ�֣����򣬷��ر������
���룺
    ������n��1��n��9����
�����
    ָ������ͼ�Ρ�
ʾ����
    5
        1
       121
      12321
     1234321
    123454321
     1234321
      12321
       121
        1
 */