#include <stdlib.h>
typedef int ElementType; //表中所储存的元素类型

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
void Insert(ElementType X, List L, Position P); //在P处插入X
void DeleteList(List L);                        //释放内存#
Position Header();                              //创建头结点#
Position First(List L);                         //返回链表的第一个元素#
void ClearList(List L);                         //清空链表#
Position Advance(Position P);                   //
ElementType Retrieve(Position P);               //

#endif /* _List_H */

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

/* 
    定义构造函数
*/
List MakeEmpty()
{
    List L = Header();
    return L;
}

/* 
    定义查询最后一个结点的函数
*/
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

/* 
    定义清空链表的函数
*/
void ClearList(List L)
{
    Position P, tem;

    P = L->Next;
    while (P != NULL)
    {
        tem = P->Next;
        free(P);
        P = tem;
    }
}

/* 
    定义链表删除函数
*/
void DeleteList(List L)
{
    ClearList(L);
    free(L);
}

/* 
    定义查找函数
*/
Position Find(ElementType X, List L)
{
    Position P = L->Next;

    while (P != NULL && P->Element != X)
    {
        P = P->Next;
    }

    return P;
}

/* 
    定义查找结点的直接前驱函数
*/
Position FindPrevious(ElementType X, List L)
{
    Position P = L->Next;
    Position P_Last;

    while (P != NULL && P->Element != X)
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

/* 
    定义删除函数
*/
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