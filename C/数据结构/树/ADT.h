/* �������ṹ��ȷ��ÿ������ж��ٸ����ӣ��ʲ��á���ÿ���ڵ�����ж��Ӷ��������ڵ�������С��ķ�������ʵ�� */
typedef int ElementType;//����洢��Ԫ������
typedef struct TreeNode *PtrToNode;

struct TreeNode
{
    ElementType Element;
    PtrToNode FirstChild;//�˽��ĵ�һ������
    PtrToNode NextSibling;//�˽��ĸ�������һ������
};