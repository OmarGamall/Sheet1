/*     1.2) write a program to take numbers from user and find the
       max and min from them let users choose the No of numbers */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int no_of_nums=0;
    int n=0;
    int max=0;
    int min=100;
    printf("Enter no of numbers>> ");
    scanf("%d",&no_of_nums);
    for(int i=0 ; i<no_of_nums ; i++)
    {
        scanf("%d",&n);
        if(n>max) {max=n;}
        if(n<min) {min=n;}
    }
    printf("max=%d\t,min=%d",max,min);
    return 0;
}