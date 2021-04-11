#include <stdlib.h>
typedef int ElementType; //�����������Ԫ������

#ifndef _Tree_H

struct TreeNode;
typedef struct TreeNode *Position;
typedef struct TreeNode *SearchTree;

SearchTree MakeEmpty( SearchTree T );//�����
Position Find( ElementType X, SearchTree T);//����
Position FindMin( SearchTree T);//������С
Position FindMax( SearchTree T);//�������
SearchTree Insert( ElementType X,SearchTree T);//����
SearchTree Delete( ElementType X,SearchTree T);//ɾ��
ElementType Retrieve(Position P);//����

#endif /* _Tree_H */

struct TreeNode
{
    ElementType Element;
    SearchTree Left;
    SearchTree right;
};
