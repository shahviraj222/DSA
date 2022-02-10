#include <stdio.h>
int  count_vowels(char a[500])
{
    int i=0,count=0;
    while(a[i] != '\0')
    {
        if (a[i]=='a' || a[i]=='A' || a[i]=='e' || a[i]=='E' || a[i]=='i'|| a[i]=='I' || a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U' )
        {
           count++; 
           i++;
        }
        
    }
    return count;
}
int main()
{
   char a[500]="adhsajfknskj"; //arry always start from index zero don't forget this !!!!
   int result=0,i=0;
 //  printf("enter your string:");
   
       while(a[i] != '\0')
    {
        if ( a[i]== 'a')
        {
           result++; 
           i++;
        }
    }  
 //  result=count_vowels(a); 
   printf("Total number of vowels is %d",result);
   return 0;
}
