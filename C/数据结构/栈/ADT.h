#include <stdlib.h>
#include <stdio.h>
typedef int ElementType;                    //ջ���������Ԫ������

#ifndef _Stack_h

struct Node;                                //ջ��ʵ��#
typedef struct Node *PtrToNode;             //#
typedef PtrToNode Stack;                    //λ��#

int IsEmpty( Stack S );                     //�ж�ջ�Ƿ�Ϊ��#
Stack CreateStack( void );                  //����һ����ջ#
void DisposeStack( Stack S );               //
void MakeEmpty( Stack S );                  //���ջ#
void Push( ElementType X , Stack S );       //��ջ
ElementType Top( Stack S );                 //����ͷ���
void Pop( Stack S );                        //��ջ

#endif /* _Stack_h */

struct Node
{
    ElementType Element;
    PtrToNode Next;
};

int IsEmpty( Stack S )
{
    return S->Next == NULL;
}

Stack CreateStack( void )
{
    Stack S = ( struct Node* )malloc( sizeof( struct Node ) );

    if ( S == NULL )
        FatalError("Out of space!!!");
    S->Next = NULL;
    MakeEmpty( S );
    return S;
}

void MakeEmpty( Stack S )
{
    if ( S == NULL )
        Error("Must use CreateStack first");
    else
        while ( !IsEmpty(S) )
            Pop(S);
}






void FatalError(char *S)
{
    printf("%s",S);
}
void Error(char *S)
{
    printf("%s",S);
}