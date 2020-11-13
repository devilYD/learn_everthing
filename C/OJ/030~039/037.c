#include <stdio.h>
#include <math.h>

int main(void)
{
    double s1, s2, key;
    char op;

    scanf("%lf %c %lf", &s1, &op, &s2);

    if (op == '+')
    {
        key = s1 + s2;
        printf("%.2lf", key);
    }
    else if (op == '-')
    {
        key = s1 - s2;
        printf("%.2lf", key);
    }
    else if (op == '*')
    {
        key = s1 * s2;
        printf("%.2lf", key);
    }
    else if (op == '/')
    {
        if (fabs(s2) > 1e-10)
        {
            key = s1 / s2;
            printf("%.2lf", key);
        }
        else
        {
            printf("Wrong input!");
        }
    }
    else
    {
        printf("Wrong input!");
    }

    return 0;
}

/* 
题目描述：
    给你一个简单的四则运算表达式，包含两个实数和一个运算
    符，请编程计算出结果
输入：
    表达式的格式为：s1 op s2， s1和s2是两个实数，op表示
    的是运算符(+,-,*,/)，也可能是其他字符
输出：
    如果运算符合法，输出表达式的值；若运算符不合法或进行
    除法运算时除数是0，则输出"Wrong input!"。最后结果小
    数点后保留两位。
示例：
    1.0 + 1.0
    2.00
 */