/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void swap_number(int *a, int *b)
{
    *a = *b + *a;
    *b = *a - *b;
    *a = *a - *b;
    printf("After swap, a= %d b= %d\n",*a,*b);
}

void main()
{
    int a,b;
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    swap_number(&a,&b);
}
