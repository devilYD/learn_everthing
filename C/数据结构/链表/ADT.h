#include <stdlib.h>
typedef int ElementType; //�����������Ԫ������

#ifndef _List_H

struct Node;                    //���
typedef struct Node *PtrToNode; //���ָ��
typedef PtrToNode List;         //��
typedef PtrToNode Position;     //λ��

List MakeEmpty();                               //����һ���ձ�#
int isEmpty(List L);                            //��ѯ�Ƿ�Ϊ�ձ�#
int isLast(Position P, List L);                 //��ѯ����Ƿ�Ϊ�����β#
Position Find(ElementType X, List L);           //���Ҷ�Ӧ���
void Delete(ElementType X, List L);             //ɾ����Ӧ���
Position FindPrevious(ElementType X, List L);   //���ҽ���ֱ��ǰ��
void Insert(ElementType X, List L, Position P); //��P������X
void DeleteList(List L);                        //�ͷ��ڴ�
Position Header();                              //����ͷ���#
Position First(List L);                         //��������ĵ�һ��Ԫ��#
Position Advance(Position P);                   //
ElementType Retrieve(Position P);               //

#endif /* _List_H */

/* 
    ������ṹ�� 
*/
struct Node
{
    ElementType Element;
    Position Next;
};

/* 
    ����������ѯ�ú��� 
    ���Ϊ�淵��1
    ���򷵻�0
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
    ������δ���ͷ���
*/
Position Header()
{
    Position P = (struct Node *)malloc(sizeof(struct Node));
    P->Element = NULL;
    P->Next = NULL;
    return P;
}

/* 
    ���幹�캯��
*/
List MakeEmpty()
{
    List L = Header();
    return L;
}

/* 
    �����ѯ���һ�����ĺ���
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