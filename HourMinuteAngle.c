/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// C program to find angle between hour and minute hands
#include <stdio.h>

int calc_angle(int hour, int min)
{
    int h_a = ((hour*360)/12) + ((min*360)/(12*60));
    int m_a = (min*360)/60;
    
    int angle = abs(h_a - m_a);
    
    if(angle>180)
        angle = 360 - angle;
        
    return angle;
}

void main()
{
    int hour = 0, minute = 0;
    printf("Please enter hour and minute\n");
    scanf("%d%d", &hour, &minute);
    int result = calc_angle(hour,minute);
    printf("Angle  = %d\n", result);
}