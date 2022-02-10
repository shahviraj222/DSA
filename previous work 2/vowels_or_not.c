#include<stdio.h>
void identifier(char k)
{
    switch (k)
    {
    case'a':
    case'A':
        printf("Your enter element is vowels");
        break;
    case'e':
    case'E':
         printf("Your enter element is vowels");
         break;
    case'i':  
    case'I':
          printf("Your enter element is vowels");
          break;      
    case'o':
    case'O':
          printf("Your enter element is vowels");
          break;
    case'u':
    case'U': 
          printf("Your enter element is vowels");  
          break;      
    default:
        printf("Your enter element is not vowels");
    }
}
int main()
{
    char a;
    printf("Enter a charecter:");
    scanf("%c",&a);
    identifier(a);
    return 0;
}