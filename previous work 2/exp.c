#include <stdio.h>
#include <string.h>
void main()
{
    char s1[10]="liril",s2[10];
    int i;
    strcpy(s2,s1);
    strrev(s2);
    i = strcmp(s1,s2);
    if(i==0)
 	printf("Palindrome");
    else
        	printf("NOT Palindrome");
}
