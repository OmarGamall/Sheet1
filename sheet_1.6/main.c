/* 1.6)Write a program to calculate the power of a number ,The number and its power are input from user. */

#include<stdio.h>
#include<math.h>
double Power(int num, int pow);
int Power_2(int base, int exponent);
int main()
{
    int num=0;
    int power=0;
    while (1)
    {
        printf("number=");
        scanf("%d",&num);
        printf("power=");
        scanf("%d",&power);
        printf("res=%f\n",Power(num,power));
        printf("res=%f\n",pow(num,power));
        printf("res=%d\n",Power_2(num,power));
    }
    
    return 0;
}

double Power(int num, int pow)
{
    double res = 1;
    int sign = 1;
    if (pow < 0)
    {
        sign = -1;
        pow = abs(pow);
    }
    for (int i = 0; i < pow; i++)
    {
        res = res * num;
    }
    if (sign == 1)
        return res;
    else
        return 1 / res;
}

//another way using bitwise
// this implementation assumes that both base and exponent are non-negative integers.
int Power_2(int base, int exponent)
{
    int result = 1;
    while (exponent > 0)
    {
        if (exponent & 1)
        {
            result = result * base;
        }
        base = base * base;
        exponent = exponent >> 1;
    }
    return result;
}