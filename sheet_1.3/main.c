/*1.3) Write a program to take numbers from user and
calculate the sum of them (let users choose the No of numbers).
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int no_of_nums=0;
    int n=0;
    int sum=0;
    printf("Enter no of numbers>> ");
    scanf("%d",&no_of_nums);
    for(int i=1 ; i<=no_of_nums ;i++)
    {
        printf("n%d>> ",i);
        scanf("%d",&n);
        sum=sum+n;
    }
    printf("sum=%d",sum);
    return 0;
}