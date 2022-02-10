#include<stdio.h>
int main()
{   char s[100]; 
    printf("enter your name with surename");
    scanf("%[^\n]%*c", s); 
    printf("%s\n",s);
    return 0;


}