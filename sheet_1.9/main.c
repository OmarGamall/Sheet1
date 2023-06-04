// 1.9)Write a program that reads a positive integer and checks if it is a perfect square.
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>
void test_Is_Perfect_Square();
int Is_Perfect_Square(int num);

// Main function to run the unit test
int main()
{
    test_Is_Perfect_Square();

    printf("All tests passed!\n");

    return 0;
}

/*function used to check if a given number is a perfect square or not
* return: 1 if a perfect square
*         0 if not a perfect square
*/

int Is_Perfect_Square(int num)
{
    int flag = 0;
    for (int i = 1; i*i <= num; i++)
    {
        if ((num / i == i) && (num % i == 0))
        {
            // then,its a perfect square
            flag = 1;
        }
    }
    if (flag == 1 || num == 0)
        return 1;
    else
        return 0;
}


//another way using math.h functions
int isPerfectSquare(int num) 
{
    int root = (int) sqrt(num);
    return (root*root == num);
}


// Unit test for Is_Perfect_Square function
void test_Is_Perfect_Square()
{
    // Test cases
    assert(Is_Perfect_Square(1) == 1);
    assert(Is_Perfect_Square(4) == 1);
    assert(Is_Perfect_Square(9) == 1);
    assert(Is_Perfect_Square(16) == 1);
    assert(Is_Perfect_Square(25) == 1);
    assert(Is_Perfect_Square(36) == 1);
    assert(Is_Perfect_Square(49) == 1);
    assert(Is_Perfect_Square(64) == 1);
    assert(Is_Perfect_Square(81) == 1);
    assert(Is_Perfect_Square(100) == 1);

    assert(Is_Perfect_Square(2) == 0);
    assert(Is_Perfect_Square(3) == 0);
    assert(Is_Perfect_Square(5) == 0);
    assert(Is_Perfect_Square(7) == 0);
    assert(Is_Perfect_Square(10) == 0);
    assert(Is_Perfect_Square(13) == 0);
    assert(Is_Perfect_Square(15) == 0);
    assert(Is_Perfect_Square(17) == 0);

    // Test edge cases
    assert(Is_Perfect_Square(0) == 1);
    assert(Is_Perfect_Square(-1) == 0);
}