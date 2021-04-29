#include "ADT.h"
#include <stdio.h>

int main(void)
{
    int i = 0;
    List A, B, Answer;
    A = Input_L();
    B = Input_L();
    printf("请选择计算模式:\n");
    printf("1.加法运算\n");
    printf("2.减法运算\n");
    printf("3.乘法运算\n");
    scanf("%d", &i);
    printf("%d", i);
    if (i == 1)
        Answer = Add(A, B);
    else if (i == 2)
        Answer = Sub(A, B);
    else if (i == 3)
        Answer = Mult(A, B);
    Output_L(Answer);
    DeleteList(A);
    DeleteList(B);
}