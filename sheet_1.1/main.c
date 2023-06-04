#include <stdio.h>

int main()
{
    int num1, num2, sum = 0;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    //check if num1>num2
    if(num1>num2)
    {
        int temp=num1;
        num1=num2;
        num2=temp;
    }
    for (int i = num1 + 1; i < num2; i++)
    {
        sum += i;
    }
    printf("Sum of the numbers between %d and %d is %d", num1, num2, sum);
    return 0;
}