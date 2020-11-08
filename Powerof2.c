/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int pow_two(int a)
{
    if(a == 0)
        return 0;
    while(a>0)
    {
        if((a & a-1) == 0)
            return 1;
        else
            return 0;
    }
}

void main()
{
    int a = 0;
    int result = pow_two(a);
    printf(result ? "Power of 2" : "Not power of 2");
}
