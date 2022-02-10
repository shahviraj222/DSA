#include <stdio.h>
int main()
{
    int a;
    char b, c, d;
    printf("Enter your number in your name\n");
    scanf("%d", &a);   //you enter the number and then press enter in time of output console   
     //to prevent this error put// //getchar();//                
    printf("Enter your name's first latter:");//here this line is taking input as enter 
    scanf("%c", &b);
    printf("\nEnter your name's second latter:");
    scanf("%c", &c);

    return 0;
}