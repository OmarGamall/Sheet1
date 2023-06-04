/* 1.8) Write a program that reads a positive integer and checks if it is a prime.*/
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
int Is_prime(int num);
void test_Is_prime();
int main()
{
    test_Is_prime();
    printf("All test cases passed!!");
    return 0;
}

void test_Is_prime() 
{
    // Test cases
    assert(Is_prime(2) == 1);
    assert(Is_prime(3) == 1);
    assert(Is_prime(5) == 1);
    assert(Is_prime(7) == 1);
    assert(Is_prime(11) == 1);
    assert(Is_prime(13) == 1);
    assert(Is_prime(17) == 1);
    assert(Is_prime(19) == 1);
    assert(Is_prime(23) == 1);
    assert(Is_prime(29) == 1);
    assert(Is_prime(31) == 1);
    assert(Is_prime(37) == 1);
    assert(Is_prime(41) == 1);
    assert(Is_prime(43) == 1);
    assert(Is_prime(53) == 1);
    assert(Is_prime(59) == 1);
    assert(Is_prime(61) == 1);
    assert(Is_prime(67) == 1);
    assert(Is_prime(71) == 1);
    assert(Is_prime(73) == 1);
    assert(Is_prime(79) == 1);
    assert(Is_prime(83) == 1);

    assert(Is_prime(4) == 0);
    assert(Is_prime(6) == 0);
    assert(Is_prime(8) == 0);
    assert(Is_prime(9) == 0);
    assert(Is_prime(10) == 0);
    assert(Is_prime(12) == 0);
    assert(Is_prime(14) == 0);
    assert(Is_prime(15) == 0);
    assert(Is_prime(16) == 0);
    assert(Is_prime(20) == 0);
    assert(Is_prime(21) == 0);
    assert(Is_prime(22) == 0);
    assert(Is_prime(24) == 0);
    assert(Is_prime(25) == 0);
    assert(Is_prime(26) == 0);
    assert(Is_prime(27) == 0);
    assert(Is_prime(28) == 0);
    assert(Is_prime(30) == 0);
    assert(Is_prime(32) == 0);
    assert(Is_prime(33) == 0);
    assert(Is_prime(34) == 0);
    assert(Is_prime(35) == 0);
    assert(Is_prime(36) == 0);

    // Test edge cases
    assert(Is_prime(1) == 0);
    assert(Is_prime(0) == 0);
    assert(Is_prime(-1) == 0);
}



/*function used to check if a given number is prime or not
 * return: 1 if prime
 *         0 if not prime
 *                                                        */
int Is_prime(int num)
{
    int prime_flag = 1;
    if (num == 1 || num == 0 || num == -1)
        prime_flag = 0;
    //loop to test prime numbers from number 2 to 2147483647
    for (int i = 2; i < num ; i++)
    {
        if (num % i == 0)
        {
            // not prime
            prime_flag = 0;
            break;
        }
    }
    if (prime_flag == 0)
        return 0;  //not prime
    else
        return 1; //prime
}