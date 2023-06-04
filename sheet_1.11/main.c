/* 1.11) Write a program to sum the digits in a decimal number  */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int Sum_Digits(int num);
void test_Sum_Digits();

int main()
{
    test_Sum_Digits();

    printf("All tests passed!\n");
    return 0;
}

int Sum_Digits(int num)
{
    num=abs(num);
    int sum=0;
    while (num)
    {
        sum=sum+(num%10);
        num=num/10;
    }
    return sum;
}


// Unit test for Sum_Digits function
void test_Sum_Digits() 
{
    // Test cases
    assert(Sum_Digits(123) == 6);
    assert(Sum_Digits(456) == 15);
    assert(Sum_Digits(789) == 24);
    assert(Sum_Digits(1024) == 7);
    assert(Sum_Digits(999) == 27);
    assert(Sum_Digits(145) == 10);
    
    // Test edge cases
    assert(Sum_Digits(0) == 0);
    assert(Sum_Digits(-123) == 6);
}