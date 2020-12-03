/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdint.h>
#include <string.h>

char *strcon(char *str1 , char *str2) 
{ 
    int i = 0; 
    int l1 = strlen(str1); 
    int l2 = strlen(str2); 
    char *fdst = (char *)malloc((l1+l2+1)*sizeof(char)); // free it later 
    while(str1[i]!='\0') 
    { 
        fdst[i] = str1[i];
        i++; 
    } 
    int j = 0;
    while(str2[j]!='\0') 
    {
        fdst[i] = str2[j];
        i++; 
        j++;
    } 
    fdst[i] = '\0'; 
    return fdst;  
}

int main()
{
    printf("String cat\n");
    char* cat = strcon("Hey", "Hello");
    printf("%s", cat);
    return 0;
}
