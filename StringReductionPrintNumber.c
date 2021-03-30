/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

char* string_red(char *str)
{
    int i = 0;
    int count = 0;
    char countstr[] = "0";
    char* ret_string = NULL;
    ret_string = (void*)malloc(52*(sizeof(char)));
    for(i = 0; str[i]!='\0'; i++)
    {
        count++;
        if(str[i] != str[i+1])
        {
            countstr[0] = count + '0';
            strncat(ret_string,&str[i],1);
            strncat(ret_string,&countstr[0],1);
            count = 0;
        }
    }
    return ret_string;
}

int main()
{
    char s[] = "aabbcccccccccccccc";
    char* out_str = '\0';
    out_str = string_red(s);
    puts(out_str);
}