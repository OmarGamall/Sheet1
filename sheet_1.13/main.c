#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int Sum_holes(int num);
int main()
{
    printf("%d",Sum_holes(3824));
    return 0;
}

/* 1, 2, 3, 5 and 7 = 0 holes.
   0, 4, 6, and 9 = 1 hole.
   8 = 2 holes.              */
int Sum_holes(int num)
{
    int sum = 0;
    int digit = 0;
    while (num)
    {
        digit = num % 10;
        if (digit == 8)
        {
            sum = sum + 2;
        }
        else if (digit == 1 || digit == 2 || digit == 3 || digit == 5 || digit == 7)
        {
            sum = sum + 0;
        }
        else
        {
            sum = sum + 1;
        }
        num = num / 10;
    }
    return sum;
}