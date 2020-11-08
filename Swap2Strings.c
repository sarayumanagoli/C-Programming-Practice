/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void swap_string(char *a, char *b)
{
    int i = 0;
    printf("Before swapping,\n");
    puts(a);
    puts(b);
    while((a[i]!='\0')||(b[i]!='\0'))
    {
        a[i] = b[i] + a[i];
        b[i] = a[i] - b[i];
        a[i] = a[i] - b[i];
        i++;
    }
    printf("After swapping,\n");
    puts(a);
    puts(b);
}

void main()
{
    char a[10] = "Hello";
    char b[10] = "World";
    swap_string(a,b);
}
