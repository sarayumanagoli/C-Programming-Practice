/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Simple CPP program to find MSB number 
// for given n. 
#include <stdio.h>
#include <string.h>

void findfreq(char* str) 
{ 
	int i = 0;
	int freq[26] = {0};
	while(str[i]!='\0')
	{
	    freq[str[i]-'a']++;
	    i++;
	}
	for(i = 0; i < 26; i++)
	{
	    printf("%c occurs %d times\n", (i+'a'),freq[i]);
	    
	} 
}

// Driver code 
void main() 
{ 
	char s[20] = "aaabbbdjfkkklsssaaaw";
	findfreq(s);
} 