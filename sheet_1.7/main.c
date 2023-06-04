// 1.7) a program that reads a positive integer and computes the factorial.

#include <stdio.h>

double factorial(int n);

int main()
{
    int n, result;
    while (1)
    {
        printf("Enter a non-negative integer: ");
        scanf("%d", &n);
        result = factorial(n);
        printf("%d! = %d\n", n, result);
    }
    return 0;
}

/* Factorial of a non-negative integer n is the product of all positive integers from 1 to n.
 * We denote the factorial of n as n!.
   For example, 5! or "five factorial" is equal to 5 x 4 x 3 x 2 x 1, which is 120.*/
double factorial(int n)
{
    double result = 1;
    for (int i = 1; i <= n; i++)
    {
        result = result * i;
    }
    return result;
}