#include <stdlib.h>

struct CodeWeight;
typedef CodeWeight *ElementType; //�����������Ԫ������

#ifndef _List_H

struct Node;                    //���
typedef struct Node *PtrToNode; //���ָ��
typedef PtrToNode List;         //��
typedef PtrToNode Position;     //λ��

List MakeEmpty();                               //����һ���ձ�#
int isEmpty(List L);                            //��ѯ�Ƿ�Ϊ�ձ�#
int isLast(Position P, List L);                 //��ѯ����Ƿ�Ϊ�����β#
Position Find(char X, List L);                  //���Ҷ�Ӧ���#
void Delete(char X, List L);                    //ɾ����Ӧ���#
void DeleteList(List L);                        //�ͷ��ڴ�#
Position Header();                              //����ͷ���#
void ClearList(List L);                         //�������#

#endif /* _List_H */

struct CodeWeight
{
    char Code;
    size_t Weight;
};


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
    free(L);
}

Position Find(char X, List L)
{
    Position P = L->Next;

    while (P != NULL && P->Element->Code != X)
    {
        P = P->Next;
    }

    return P;
}

void Delete(char X, List L)
{
    Position P_Last = FindPrevious(X,L);
    Position P = Find(X,L);

    if (P_Last != NULL)
    {
        P_Last->Next = P->Next;
        free(P);
    } 
}