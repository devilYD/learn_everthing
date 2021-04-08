/* ��Ϊ���е�����ʵ�� */
#include <stdlib.h>
typedef int ElementType; //����洢��Ԫ������

#ifndef _Queue_h

struct QueueRecord;
typedef struct QueueRecord *Queue;

int isEmpty(Queue Q);                 //��ѯ�Ƿ�Ϊ��#
int isFull(Queue Q);                  //��ѯ�Ƿ�Ϊ��#
Queue CreateQueue(int MaxElements);   //����һ����������MaxElements��Element�Ķ���#
void DisposeQueue(Queue Q);           //���ٶ���#
void MakeEmpty(Queue Q);              //��ն���
void EnQueue(Queue Q);                //��Ӳ���
ElementType Front(Queue Q);           //���ض�ͷԪ��
void Dequeue(Queue Q);                //���Ӳ���
ElementType FrontAndDequeue(Queue Q); //���ض�ͷԪ�ز�����

#endif /* _Queue_h */

struct QueueRecord
{
    int Capacity; //����
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

