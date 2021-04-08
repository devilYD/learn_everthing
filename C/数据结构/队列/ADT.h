/* ��Ϊ���е�����ʵ�� */
typedef int ElementType;//����洢��Ԫ������

#ifndef _Queue_h

struct QueueRecord;
typedef struct QueueRecord *Queue;

int isEmpty( Queue Q );//��ѯ�Ƿ�Ϊ��
int isFull( Queue Q );//��ѯ�Ƿ�Ϊ��
Queue CreateQueue( int MaxElements );//����һ����������MaxElements��Element�Ķ���
void DisposeQueue( Queue Q );//���ٶ���
void MakeEmpty( Queue Q );//��ն���
void EnQueue( Queue Q );//��Ӳ���
ElementType Front( Queue Q );//���ض�ͷԪ��
void Dequeue( Queue Q );//���Ӳ���
ElementType FrontAndDequeue( Queue Q );//���ض�ͷԪ�ز�����

#endif /* _Queue_h */

struct QueueRecord
{
    int Capacity;
    int Front;
    int Rear;
    int Size;
    ElementType *Array;
};

