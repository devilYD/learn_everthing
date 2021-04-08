/* 由于树结构不确定每个结点有多少个儿子，故采用“将每个节点的所有儿子都放在树节点的链表中”的方法进行实现 */
typedef int ElementType;//定义存储的元素类型
typedef struct TreeNode *PtrToNode;

struct TreeNode
{
    ElementType Element;
    PtrToNode FirstChild;//此结点的第一个儿子
    PtrToNode NextSibling;//此结点的根结点的另一个儿子
};