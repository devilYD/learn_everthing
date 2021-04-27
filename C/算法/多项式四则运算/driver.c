#include "ADT.h"
#include <stdio.h>

List Input_L();
void Output_L(List L);

int main(void)
{
    int i = 0;
    List A, B,Answer;
    A = Input_L();
    B = Input_L();
    printf("��ѡ�����ģʽ:\n");
    printf("1.�ӷ�����\n");
    printf("2.��������\n");
    printf("3.�˷�����\n");
    scanf("%d", &i);
    printf("%d",i);
    if (i == 1)
        Answer = Add(A, B);
    else if (i == 2)
        Answer = Sub(A, B);
    else if (i == 3)
        Answer = Mult(A, B);
    Output_L(Answer);
    DeleteList(A);
    DeleteList(B);
}

List Input_L()
{
    List L = MakeEmpty();
    Position P = L;
    int i;
    double a,b;
    printf("���������ʽ������:");
    scanf("%d", &i);
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