#include <stdlib.h>
#include <stdio.h>
typedef int ElementType; //栈中所储存的元素类型

#ifndef _Stack_h

struct Node;                    //栈的实现#
typedef struct Node *PtrToNode; //#
typedef PtrToNode Stack;        //位置#

int IsEmpty(Stack S);              //判断栈是否为空#
Stack CreateStack(void);           //创建一个空栈#
void DisposeStack(Stack S);        //删除栈#
void MakeEmpty(Stack S);           //清空栈#
void Push(ElementType X, Stack S); //入栈#
ElementType Top(Stack S);          //返回栈顶元素#
void Pop(Stack S);                 //出栈#

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