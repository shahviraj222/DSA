#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()

{
    int a,n ;
    srand(time(0));
    n=rand()%10+1;
    //if we want gerater then 100 then %1000;
    //if we want smaller then 100 then %10;
    //if we don't want zero then put +1;
    printf("%d\n",n);

    printf("\n                  WELCOME TO THE GAME POWERED BY VIRAJ                     \n");


    return 0;
}