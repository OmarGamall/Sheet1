/* 1.4) write a program that take two numbers and multiply them without using (*) operation. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, product = 0, sign = 1;
    while (1)
    {
        product=0;
        printf("\nEnter first number: ");
        scanf("%d", &num1);
        printf("Enter second number: ");
        scanf("%d", &num2);

        if (num1 < 0)
        {
            num1 = abs(num1);
            sign = -1;
        }
        if (num2 < 0)
        {
            num2 = abs(num2);
            sign = -1;
        }

        for (int i = 0; i < num2; i++)
        {
            product = product + num1;
        }
        product = product * sign;
        printf("%d x %d = %d", num1, num2, product);
    }

    return 0;
}