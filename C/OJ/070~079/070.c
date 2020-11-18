#include<stdio.h>
#include<math.h>
 
typedef enum
{RS,W,A,S,D,R} Function;
 
int forword(int list[],Function n,int time);
 
int main()
{
    int set[2]={0,0};
    int time,t=0;
    int command=0;
    Function n=1;
 
    while (command!=3)
    {
        scanf("%d",&time); 
        scanf("%d",&command);
        forword(set,n,time-t);
        if (command == 1)
        {
            n=n+1;
            if (n == 5)
            {
                n = 1;
            }
        }
        else if (command == 2)
        {
            n=n-1;
            if (n == 0)
            {
                n = 4;
            }
        }
        t=time;
    }
 
    printf("%d %d",set[1],set[0]);
 
    return 0;
}
 
int forword(int list[],Function n,int time)
{
    if (n == 1)
    {
        list[0] = list[0] + 10*time;
    }
    else if (n == 2)
    {
        list[1] = list[1] - 10*time;
    }
    else if (n == 3)
    {
        list[0] = list[0] - 10*time;
    }
    else if (n == 4)
    {
        list[1] = list[1] + 10*time;
    }
     
    return 0;
}

/* 
题目描述：
    有一辆智能小车，最初（时间为0)的位置为(0,0)，我们想知道它
    最后的位置。小车以每小时10公里的速度向北移动（以北为y轴正
    向，以东为x轴正向）。小车会受到一系列依照时间戳记排序的命
    令，1表示“向左转”，2表示“向右转”，3表“停止”。每个命令的前
    面有一个时间戳记，所以我们知道该命令是何时发出的。最后一个
    命令一定是“停止”。我们另外假设，这辆小车非常灵活，它可以在
    瞬间转弯。
    以下列输入为例。小车在时间为5的时候收到一个“向左转”的命令1，
    在时间10收到一个“向右转”的命令2，在时间15收到一个“停止”的命
    令3。那么在最后时间15的时候，小车的位置将在（-50,100）。程
    序只要求输出小车最后的位置，第一个整数是x坐标，第二个整数是
    y坐标。
输入：
    输入包含多个命令，每个命令由整数time和command组成，表示在时
    刻time发出命令command。command的取值范围1-3，含义如上所述。
输出：
    输出占一行，包含两个整数，表示小车的最终位置。两个整数之间由
    空格隔开。
示例：
    5
    1 
    10 
    2 
    15 
    3
    -50 100
 */