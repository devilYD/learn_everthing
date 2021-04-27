#include "ADT.h"
#include <stdio.h>

List Input_L();
void Output_L(List L);

int main(void)
{
    int i = 0;
    List A, B;
    A = Input_L();
    Output_L(A);
    B = Input_L();
    Output_L(B);
    printf("��ѡ�����ģʽ:\n");
    printf("1.�ӷ�����\n");
    printf("2.��������\n");
    printf("3.�˷�����\n");
    scanf("%d", &i);
    if (i == 1)
        Output_L(Add(A, B));
    else if (i == 2)
        Output_L(Sub(A, B));
    else if (i == 3)
        Output_L(Mult(A, B));
    DeleteList(A);
    DeleteList(B);
}

List Input_L()
{
    List L = MakeEmpty();
    Position P = L;
    int i;
    float a,b;
    printf("���������ʽ������:");
    scanf("%d", &i);
    printf("%d",i);
    for (int t = 0; t < i; t++)
    {
        P->Next = New_P();
        printf("�������%d��ĳ���:", t + 1);
        scanf("%lf", &a);
        P->Next->Element->Constant = a;
        printf("�������%d����ݴ�:", t + 1);
        scanf("%lf", &b);
        P->Next->Element->Variable = b;
        P = P->Next;
    }
    return L;
}

void Output_L(List L)
{
    int i = 0;
    Position P = L->Next;
    printf("��Ϊ:");
    while (P != NULL)
    {
        printf("+ (%.2lf*N^%.0lf) " + !i, P->Element->Constant, P->Element->Variable);
        P = P->Next;
        i++;
    }
    printf("\n");
}