#include <stdlib.h>
#include <stdio.h>
typedef int ElementType; //ջ���������Ԫ������

#ifndef _Stack_h

struct Node;                    //ջ��ʵ��#
typedef struct Node *PtrToNode; //#
typedef PtrToNode Stack;        //λ��#

int IsEmpty(Stack S);              //�ж�ջ�Ƿ�Ϊ��#
Stack CreateStack(void);           //����һ����ջ#
void DisposeStack(Stack S);        //ɾ��ջ#
void MakeEmpty(Stack S);           //���ջ#
void Push(ElementType X, Stack S); //��ջ#
ElementType Top(Stack S);          //����ջ��Ԫ��#
void Pop(Stack S);                 //��ջ#

#endif /* _Stack_h */

struct Node
{
    ElementType Element;
    PtrToNode Next;
};

int IsEmpty(Stack S)
{
    return S->Next == NULL;
}

Stack CreateStack(void)
{
    Stack S = (struct Node *)malloc(sizeof(struct Node));

    if (S == NULL)
        FatalError("Out of space!!!");
    S->Next = NULL;
    MakeEmpty(S);
    return S;
}

void MakeEmpty(Stack S)
{
    if (S == NULL)
        Error("Must use CreateStack first");
    else
        while (!IsEmpty(S))
            Pop(S);
}

void DisposeStack(Stack S)
{
    MakeEmpty(S);
    free(S);
}

ElementType Top(Stack S)
{
    return S->Next->Element;
}

void Push(ElementType X, Stack S)
{
    Stack P = (struct Node *)malloc(sizeof(struct Node));
    P->Element = X;
    P->Next = S->Next;
    S->Next = P;
}

void Pop(Stack S)
{
    Stack P = S->Next->Next;
    free(S->Next);
    S->Next = P;
}

void FatalError(char *S)
{
    printf("%s", S);
}
void Error(char *S)
{
    printf("%s", S);
}