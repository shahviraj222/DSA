#include<stdio.h>
#include<string.h>
int main()
{
    int vowel=0,n=0,space=0,digits=0,conguate=0,count_char=0;
    char s[100],c,v[10]={'a','e','i','o','u','A','E','I','O','U'};
    printf("Enter your strings:");
    gets(s);
    printf("if you want to count specyfic character then print 1");
    scanf("%d",&n);
    if(n==1)
    {   
        fflush(stdin);
        printf("enter charecter to be count:");
        scanf("%c",&c);
    }
    for (int i = 0; i < strlen(s); i++)
    {
        for (int j = 0; j <10 ; j++)
        {
           if(s[i]==v[j])
           {
             vowel++;
             break;
           }  
        }

        if (s[i] > '0' && s[i] < '9')//s[i]<57 && s[i]>48
        {
            digits++;
        }
        else if(s[i]==' ')
        {
            space++;
        }
        if(s[i]=='c' || s[i]=='C')
        {
            count_char++;
        }

        
    }
    if(n==1)
    {
        printf("\nyour specify char count is %d\n",count_char);
    }
    printf("Vowels=%d\nDigits=%d\nConsants=%d\nSpace=%d",vowel,digits,strlen(s)-vowel-digits-space,space);
    
    return 0;
}