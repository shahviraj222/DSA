#include<stdio.h>
#include<string.h>

int main()
{   char a[24];
    char b[34];
    char c[40];
    char d[30];
    printf("Enter your first name:");
    gets(a);
    printf("Enter your second name:");
    gets(b);

    

   strcpy(d, strcat(a,b));
   puts(d);

    return	0;
}