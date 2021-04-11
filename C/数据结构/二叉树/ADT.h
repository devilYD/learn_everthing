#include <stdlib.h>
typedef int ElementType; //表中所储存的元素类型

#ifndef _Tree_H

struct TreeNode;
typedef struct TreeNode *Position;
typedef struct TreeNode *SearchTree;

SearchTree MakeEmpty( SearchTree T );//清空树
Position Find( ElementType X, SearchTree T);//查找
Position FindMin( SearchTree T);//查找最小
Position FindMax( SearchTree T);//查找最大
SearchTree Insert( ElementType X,SearchTree T);//插入
SearchTree Delete( ElementType X,SearchTree T);//删除
ElementType Retrieve(Position P);//检索

#endif /* _Tree_H */

struct TreeNode
{
    ElementType Element;
    SearchTree Left;
    SearchTree right;
};
