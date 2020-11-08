/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

char* string_red(char *str)
{
    int i = 0;
    int count = 0;
    char* ret_string = NULL;
    ret_string = (void*)malloc(26*(sizeof(char)));
    for(i = 0; str[i]!='\0'; i++)
    {
        if(str[i] != str[i+1])
        {
            strncat(ret_string,&str[i],1);
        }
    }
    return ret_string;
}

int main()
{
    char s[10];
    printf("Enter the string\n");
    gets(s);
    char* out_str = '\0';
    out_str = string_red(s);
    puts(out_str);
}