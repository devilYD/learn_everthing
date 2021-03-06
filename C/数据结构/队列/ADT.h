/* 此为队列的数组实现 */
#include <stdlib.h>
typedef int ElementType; //定义存储的元素类型

#ifndef _Queue_h

struct QueueRecord;
typedef struct QueueRecord *Queue;

int isEmpty(Queue Q);                 //查询是否为空#
int isFull(Queue Q);                  //查询是否为满#
Queue CreateQueue(int MaxElements);   //创建一个最多可容量MaxElements个Element的队列#
void DisposeQueue(Queue Q);           //销毁队列#
void MakeEmpty(Queue Q);              //清空队列#
void EnQueue(ElementType X, Queue Q); //入队操作#
ElementType Front(Queue Q);           //返回队头元素#
void Dequeue(Queue Q);                //出队操作#
ElementType FrontAndDequeue(Queue Q); //返回队头元素并出队#

#endif /* _Queue_h */

struct QueueRecord
{
    int Capacity; //容量
    int Front;
    int Rear;
    int Size;
    ElementType *Array;
};

int isEmpty(Queue Q)
{
    return Q->Size == 0;
}

int isFull(Queue Q)
{
    return Q->Size == Q->Capacity;
}

Queue CreateQueue(int MaxElements)
{
    Queue Q = (struct QueueRecord *)malloc(sizeof(struct QueueRecord));
    Q->Array = (ElementType *)malloc(sizeof(ElementType) * MaxElements);
    Q->Capacity = MaxElements;
    Q->Front = 1;
    Q->Size = 0;
    Q->Rear = 0;
    return Q;
}

void DisposeQueue(Queue Q)
{
    free(Q->Array);
    free(Q);
}

void MakeEmpty(Queue Q)
{
    Q->Size = 0;
    Q->Front = 1;
    Q->Rear = 0;
}

static int Succ(int Value, Queue Q)
{
    if (++Value == Q->Capacity)
        Value = 0;
    return Value;
}

void EnQueue(ElementType X, Queue Q)
{
    if (!isFull(Q))
    {
        Q->Size++;
        Q->Rear = Succ(Q->Rear, Q);
        Q->Array[Q->Rear] = X;
    }
}

ElementType Front(Queue Q)
{
    return Q->Array[Q->Front];
}

static int unSucc(int Value,Queue Q)
{
    if (--Value == -1)
        Value = Q->Capacity-1;
    return Value;
}

void Dequeue(Queue Q)
{
    if (!isEmpty(Q))
    {
        Q->Size--;
        Q->Front = unSucc(Q->Front,Q);
    }
}

ElementType FrontAndDequeue(Queue Q)
{
    ElementType X = Front(Q);
    Dequeue(Q);
    return X;
}