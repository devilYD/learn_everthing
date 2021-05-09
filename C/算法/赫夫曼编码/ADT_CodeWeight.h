#include <stdlib.h>

struct CodeWeight;
typedef CodeWeight *ElementType; //表中所储存的元素类型

#ifndef _List_H

struct Node;                    //结点
typedef struct Node *PtrToNode; //结点指针
typedef PtrToNode List;         //表
typedef PtrToNode Position;     //位置

List MakeEmpty();                               //创建一个空表#
int isEmpty(List L);                            //查询是否为空表#
int isLast(Position P, List L);                 //查询结点是否为链表结尾#
Position Find(char X, List L);                  //查找对应结点#
void Delete(char X, List L);                    //删除对应结点#
void DeleteList(List L);                        //释放内存#
Position Header();                              //创建头结点#
void ClearList(List L);                         //清空链表#

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