#include<stdio.h>
#include<conio.h>
void main()
{
    int no,factorial;
    int fact(int no);
   // clrscr();
    printf("Enetr");
    scanf("%d",&no);
    factorial=fact(no);
    printf("Facteorial = %d",factorial);
    getch();
    //return 0;

}
int fact(int no)
{
    if(no==1 || no==0)
    {
        return 1;
    } 
    else
    return no*fact(no-1);
}