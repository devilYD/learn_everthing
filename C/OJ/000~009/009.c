#include <stdio.h>
int main(void)
{
    float x, y, z, arry;

    scanf("%f%f%f", &x, &y, &z);

    arry = (x + y + z) / 3;

    printf("%.2f", arry);

    return 0;
}

/* 
题目描述：
    已知某位学生的数学、英语和计算机课程的成绩，求该生三门课程的平均分。
输入：
    输入三个整数，数据之间由空格隔开。
输出：
    输出占一行，包含一个实数，为三门课的平均分，保留两位小数。
示例：
    87 73 93
    84.33
 */