#include <stdio.h>
int l2l(int m, int n);

int main(void)
{
    int N, m, n;
    int time = 0;

    scanf("%d", &N);
    m = 0;
    for (size_t i = 0; i < N; i++)
    {
        scanf("%d", &n);
        time = time + l2l(m, n);
        m = n;
    }
    printf("%d", time);
    return 0;
}

int l2l(int m, int n)
{
    if (m == n)
        return 5;
    else if (m > n)
        return 4 + l2l(m - 1, n);
    else if (m < n)
        return 6 + l2l(m + 1, n);
}

/* 
题目描述：
    在某一高层建筑内只有一部电梯，当你按下一个数时，电梯会运行
    到那一层。已知电梯每上升一层需6秒，下降一层需4秒，在需要停
    留的那层停留5秒。现有N个整数组成的一个需求列表，电梯将依次
    响应，电梯从0层开始运行，而在运行过程结束之前不会返回0层。
    注意，若出现相邻两个整数相等，代表在同一层执行了两个不同任
    务，可以理解为：电梯已经停了5秒，正要关门时又有人在同一层按
    开门键，电梯又开门并停留5秒。
输入：
    输入分两行，第一行是一个正整数N（N<=1000)，代表停留几次，第
    二行的N个数字代表这几次依次停留的楼层。
输出：
    输出电梯完成该任务序列所需的时间，单独占一行。
示例：
    3 
    2 3 1
    41

 */