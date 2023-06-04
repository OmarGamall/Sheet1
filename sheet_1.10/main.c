/*1.10) Write a program that reads a positive integer and check
if this number is a base of 2 like 1,2,4,8,16,32, 64...*/
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>

#define READ_BIT(reg, bit) ((reg >> (bit)) & 1)

int CheckBaseOf2_V1(int num);
int CheckBaseOf2_V2(int num);

// Unit test for CheckBaseOf2_V1 function
void test_CheckBaseOf2_V1()
{
    // Test cases
    assert(CheckBaseOf2_V1(1) == 1);
    assert(CheckBaseOf2_V1(2) == 1);
    assert(CheckBaseOf2_V1(4) == 1);
    assert(CheckBaseOf2_V1(8) == 1);
    assert(CheckBaseOf2_V1(16) == 1);
    assert(CheckBaseOf2_V1(32) == 1);
    assert(CheckBaseOf2_V1(64) == 1);
    assert(CheckBaseOf2_V1(128) == 1);
    assert(CheckBaseOf2_V1(256) == 1);
    assert(CheckBaseOf2_V1(512) == 1);

    assert(CheckBaseOf2_V1(3) == 0);
    assert(CheckBaseOf2_V1(5) == 0);
    assert(CheckBaseOf2_V1(6) == 0);
    assert(CheckBaseOf2_V1(7) == 0);
    assert(CheckBaseOf2_V1(9) == 0);
    assert(CheckBaseOf2_V1(10) == 0);
    assert(CheckBaseOf2_V1(11) == 0);
    assert(CheckBaseOf2_V1(12) == 0);
    assert(CheckBaseOf2_V1(13) == 0);
    assert(CheckBaseOf2_V1(14) == 0);
    assert(CheckBaseOf2_V1(15) == 0);
    assert(CheckBaseOf2_V1(17) == 0);

    // Test edge cases
    assert(CheckBaseOf2_V1(0) == 0);
    assert(CheckBaseOf2_V1(-1) == 0);
}

// Main function to run the unit test
int main()
{
    test_CheckBaseOf2_V1();

    printf("All tests passed!\n");

    return 0;
}

/*function used to check if a given number is a base of 2 or not
 * return: 1 if a base of 2
 *         0 if not a base of 2
 */

// version one use read bit operation
int CheckBaseOf2_V1(int num)
{
    int ones_counter = 0;
    int flag = 1;
    for (int i = 0; i < 32; i++)
    {
        if (READ_BIT(num, i) == 1)
        {
            ones_counter++;
        }
        if (ones_counter > 1 || num == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

// version 2 use pow() from math.h
int CheckBaseOf2_V2(int num)
{
    for (int i = 0; num >= pow(2, i); i++)
    {
        if (pow(2, i) == num)
        {
            return 1;
        }
    }
    return 0;
}

int isPowerOfTwo(int num)
{
    while (num > 1)
    {
        if (num % 2 != 0)
        {
            return 0;
        }
        num /= 2;
    }
    return num;
}