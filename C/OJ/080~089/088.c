#include<stdio.h>

int main(void)
{
    int N;
    char a[11];

    scanf("%d",&N);
    for (int i = 0; i < N; i++)
    {
        scanf("%s",a);
        printf("6%c%c%c%c%c\n",a[6],a[7],a[8],a[9],a[10]);
    }
    return 0;
}

/* 
题目描述：
    大家都知道，手机号是一个11位长的数字串，同时，作为学生，
    还可以申请加入校园网，如果加入成功，你将另外拥有一个短
    号。假设所有的短号都是是 6+手机号的后5位，比如号码为135
    12345678的手机，对应的短号就是645678。现在，如果给你一
    个11位长的手机号码，你能找出对应的短号吗？
输入：
    输入数据的第一行是一个N(N <= 200)，表示有N组输入数据，
    接下来的N行每一行为一个11位的手机号码。
输出：
    输出应包括N行，每行包括一个对应的短号，输出应与输入的顺序
    一致。
示例：
    2
    13512345678
    645678
    13787600321
    600321
 */