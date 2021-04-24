#include <stdlib.h>
struct Polynomial
{
    double Constant;
    double Variable;
};
typedef Polynomial *ElementType; //表中所储存的元素类型

#ifndef _List_H

struct Node;                    //结点
typedef struct Node *PtrToNode; //结点指针
typedef PtrToNode List;         //表
typedef PtrToNode Position;     //位置

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

#endif /* _List_H */

int Equal(ElementType A,ElementType B)
{
    if (A->Constant == B->Constant && A->Variable == B->Variable)
        return 1;
    else 
        return 0;
}

int Equal_V(ElementType A,ElementType B)
{
    if (A->Variable == B->Variable)
        return 1;
    else 
        return 0;
}

/* 
    定义结点结构体 
*/
struct Node
{
    ElementType Element;
    Position Next;
};

/* 
    定义两个查询用函数 
    如果为真返回1
    否则返回0
*/
int isEmpty(List L)
{
    return L->Next != NULL;
}
int isLast(Position P, List L)
{
    return P->Next == NULL;
}

/* 
    定义如何创建头结点
*/
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
    free(L);
}

Position Find(ElementType X, List L)
{
    Position P = L->Next;

    while (P != NULL && !Equal(X,P->Element))
    {
        P = P->Next;
    }

    return P;
}

Position FindPrevious(ElementType X, List L)
{
    Position P = L->Next;
    Position P_Last;

    while (P != NULL && !Equal(X,P->Element))
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
    Position P_Last = FindPrevious(X,L);
    Position P = Find(X,L);

    if (P_Last != NULL)
    {
        P_Last->Next = P->Next;
        free(P);
    } 
}

void Insert(ElementType X, List L, Position P)
{
    Position T = FindPrevious(P->Element,L);

    Position O = (struct Node *)malloc(sizeof(struct Node));
    O->Element = X;
    O->Next = P;
    T->Next = O;
}

void Rebuild(List A)
{
    List L = MakeEmpty();
    Position P = A->Next;
    

}

List Add(List A,List B)
{
    List L = MakeEmpty();
}