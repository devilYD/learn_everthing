#ifndef _List_H

#include <stdlib.h>
#include <stdio.h>

struct Polynomial;              //����Ԫ�ؽṹ��
struct Node;                    //���
typedef struct Node *PtrToNode; //���ָ��
typedef PtrToNode List;         //��
typedef PtrToNode Position;     //λ��
typedef struct Polynomial *Pol; //����������Ľṹ���ָ��
typedef Pol ElementType;        //�����������Ԫ������

List MakeEmpty();                               //����һ���ձ�#
int isEmpty(List L);                            //��ѯ�Ƿ�Ϊ�ձ�#
int isLast(Position P, List L);                 //��ѯ����Ƿ�Ϊ�����β#
Position Find(ElementType X, List L);           //���Ҷ�Ӧ���#
void Delete(ElementType X, List L);             //ɾ����Ӧ���#
Position FindPrevious(ElementType X, List L);   //���ҽ���ֱ��ǰ��#
void Insert(ElementType X, List L, Position P); //��P������X#
void DeleteList(List L);                        //�ͷ��ڴ�#
Position Header();                              //����ͷ���#
Position First(List L);                         //��������ĵ�һ��Ԫ��#
void ClearList(List L);                         //�������#
Position New_P();                               //�½�һ���սڵ�#
Position Copy_P(Position P);                    //����һ���ڵ�#
List Rebuild(List A);                           //�ع��������ϲ�ͬ���#
List Add(List A, List B);                       //������������ӣ�ԭ�����䣩#
List Sub(List A, List B);                       //���������������ԭ�����䣩#
List Mult(List A, List B);                      //������������ˣ�ԭ�����䣩#
List Input_L();                                 //�Ӽ�������һ������ʽ����������
void Output_L(List L);                          //��һ�������������ʾ��

#endif /* _List_H */

struct Polynomial
{
    double Constant;
    double Variable;
};

int Equal(ElementType A, ElementType B)
{
    if (A->Constant == B->Constant && A->Variable == B->Variable)
        return 1;
    else
        return 0;
}

int Equal_V(ElementType A, ElementType B)
{
    if (A->Variable == B->Variable)
        return 1;
    else
        return 0;
}

struct Node
{
    ElementType Element;
    Position Next;
};

int isEmpty(List L)
{
    return L->Next != NULL;
}
int isLast(Position P, List L)
{
    return P->Next == NULL;
}

Position Header()
{
    Position P = (struct Node *)malloc(sizeof(struct Node));
    P->Element = NULL;
    P->Next = NULL;
    return P;
}

List MakeEmpty()
{
    List L = Header();
    return L;
}

Position First(List L)
{
    Position P = L;

    if (P->Next == NULL)
    {
        return NULL;
    }

    while (P->Next != NULL)
    {
        P = P->Next;
    }
    return P;
}

void ClearList(List L)
{
    Position P, tem;

    P = L->Next;
    while (P != NULL)
    {
        tem = P->Next;
        free(P->Element);
        free(P);
        P = tem;
    }
}

void DeleteList(List L)
{
    ClearList(L);
    free(L->Element);
    free(L);
}

Position Find(ElementType X, List L)
{
    Position P = L->Next;

    while (P != NULL && !Equal(X, P->Element))
    {
        P = P->Next;
    }

    return P;
}

Position FindPrevious(ElementType X, List L)
{
    Position P = L->Next;
    Position P_Last;

    while (P != NULL && !Equal(X, P->Element))
    {
        P_Last = P;
        P = P->Next;
    }

    if (P == NULL)
    {
        return NULL;
    }
    else
    {
        return P_Last;
    }
}

void Delete(ElementType X, List L)
{
    Position P_Last = FindPrevious(X, L);
    Position P = Find(X, L);

    if (P_Last != NULL)
    {
        P_Last->Next = P->Next;
        free(P);
    }
}

void Insert(ElementType X, List L, Position P)
{
    Position T = FindPrevious(P->Element, L);

    Position O = (struct Node *)malloc(sizeof(struct Node));
    O->Element = X;
    O->Next = P;
    T->Next = O;
}

Position New_P()
{
    Position P = (struct Node *)malloc(sizeof(struct Node));
    ElementType Element = (struct Polynomial *)malloc(sizeof(struct Polynomial));
    P->Element = Element;
    P->Next = NULL;
    return P;
}

Position Copy_P(Position P)
{
    Position Po = (struct Node *)malloc(sizeof(struct Node));
    ElementType Element = (struct Polynomial *)malloc(sizeof(struct Polynomial));
    Element->Constant = P->Element->Constant;
    Element->Variable = P->Element->Variable;
    Po->Element = Element;
    Po->Next = NULL;
    return Po;
}

List Rebuild(List A)
{
    List L = MakeEmpty();
    Position P = A->Next;
    Position Pn = L;
    while (P != NULL)
    {
        while (Pn->Next != NULL && Pn->Next->Element->Variable != P->Element->Variable)
        {
            Pn = Pn->Next;
        }
        if (Pn->Next == NULL)
            Pn->Next = Copy_P(P);
        else
            Pn->Next->Element->Constant += P->Element->Constant;
        Pn = L;
        P = P->Next;
    }
    ClearList(A);
    free(A->Element);
    free(A);
    return L;
}

List Add(List A, List B)
{
    List L = MakeEmpty();
    Position Pa = A->Next;
    Position Pb = B->Next;
    Position P = L;
    while (Pa != NULL)
    {
        P->Next = Copy_P(Pa);
        Pa = Pa->Next;
        P = P->Next;
    }
    while (Pb != NULL)
    {
        P->Next = Copy_P(Pb);
        Pb = Pb->Next;
        P = P->Next;
    }
    return Rebuild(L);
}

List Sub(List A, List B)
{
    Position P = B->Next;
    while (P != NULL)
    {
        P->Element->Constant = 0 - P->Element->Constant;
        P = P->Next;
    }
    List L = Add(A, B);
    P = B->Next;
    while (P != NULL)
    {
        P->Element->Constant = 0 - P->Element->Constant;
        P = P->Next;
    }
    return L;
}

List Mult(List A, List B)
{
    List L = MakeEmpty();
    Position Pl = L;
    Position Pa = A->Next;
    Position Pb = B->Next;
    while (Pa != NULL)
    {
        while (Pb != NULL)
        {
            Pl->Next = New_P();
            Pl->Next->Element->Constant = Pa->Element->Constant * Pb->Element->Constant;
            Pl->Next->Element->Variable = Pa->Element->Variable + Pb->Element->Variable;
            Pl = Pl->Next;
            Pb = Pb->Next;
        }
        Pa = Pa->Next;
        Pb = B->Next;
    }
    return Rebuild(L);
}

List Input_L()
{
    List L = MakeEmpty();
    Position P = L;
    int i;
    double a, b;
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