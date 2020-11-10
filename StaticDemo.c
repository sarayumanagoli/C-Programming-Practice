/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void variable_test()
{
    int b = 10;
    static int a = 10;
    a++;
    b++;
    printf("a=%d b=%d\n",a,b);
}

void main()
{
    for(int i = 0; i<10 ; i++)
        variable_test();
}
