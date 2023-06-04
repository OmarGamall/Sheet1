// 1.5)program to find the division result and the remainder without using division or remainder operator
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int dividend, divisor, quotient = 0, remainder = 0, sign = 1;
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);

    if (dividend < 0)
    {
        dividend = -dividend;  //abs(dividend)
        sign = -sign;
    }
    if (divisor < 0)
    {
        divisor = -divisor;  //abs(divisor)
        sign = -sign;
    }

    while (dividend >= divisor)
    {
        dividend = dividend - divisor;
        quotient++;
    }
    remainder = dividend * sign;

    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);
    return 0;
}