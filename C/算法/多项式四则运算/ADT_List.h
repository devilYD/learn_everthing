#ifndef _List_H

#include <stdlib.h>
#include <stdio.h>

struct Polynomial;              //储存元素结构体
struct Node;                    //结点
typedef struct Node *PtrToNode; //结点指针
typedef PtrToNode List;         //表
typedef PtrToNode Position;     //位置
typedef struct Polynomial *Pol; //表中所储存的结构体的指针
typedef Pol ElementType;        //表中所储存的元素类型

List MakeEmpty();                               //创建一个空表#
int isEmpty(List L);                            //查询是否为空表#
int isLast(Position P, List L);                 //查询结点是否为链表结尾#
Position Find(ElementType X, List L);           //查找对应结点#
void Delete(ElementType X, List L);             //删除对应结点#
Position FindPrevious(ElementType X, List L);   //查找结点的直接前驱#
void Insert(ElementType X, List L, Position P); //在P处插入X#
void DeleteList(List L);                        //释放内存#
Position Header();                              //创建头结点#
Position First(List L);                         //返回链表的第一个元素#
void ClearList(List L);                         //清空链表#
Position New_P();                               //新建一个空节点#
Position Copy_P(Position P);                    //复制一个节点#
List Rebuild(List A);                           //重构单链表（合并同类项）#
List Add(List A, List B);                       //将两个链表相加（原链表不变）#
List Sub(List A, List B);                       //将两个链表相减（原链表不变）#
List Mult(List A, List B);                      //将两个链表相乘（原链表不变）#
List Input_L();                                 //从键盘输入一个多项式并构建链表
void Output_L(List L);                          //把一个链表输出到显示屏

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
    printf("请输入多项式的项数:");
    scanf("%d", &i);
    for (int t = 0; t < i; t++)
    {
        P->Next = New_P();
        printf("请输入第%d项的常量:", t + 1);
        scanf("%lf", &a);
        P->Next->Element->Constant = a;
        printf("请输入第%d项的幂次:", t + 1);
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
    printf("答案为:");
    while (P != NULL)
    {
        printf("+ (%.2lf*N^%.0lf) " + !i, P->Element->Constant, P->Element->Variable);
        P = P->Next;
        i++;
    }
    printf("\n");
}