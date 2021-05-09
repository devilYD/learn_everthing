#include <stdlib.h>
#include "ADT_CodeWeight.h"

#ifndef _Tree_H

struct TreeNode;
typedef struct TreeNode *Position;
typedef struct TreeNode *HuffTree;
typedef char** HuffCode;



#endif /* _Tree_H */

struct TreeNode
{
    char Element;
    size_t Weight;
    HuffTree Left,Right;
};

