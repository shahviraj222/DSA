#include <stdio.h>

int main()
{
    char c[100];
    int d,m,y;
    printf("Hello World");
    scanf("%s",c);
    printf("your string is %s",c);
    fflush(stdin);
    printf("\nenter date:");
    scanf("%d/%d/%d",&d,&m,&y);
    printf("%d/%d/%d",d,m,y);
    return 0;
}
