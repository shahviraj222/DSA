#include<stdio.h>
#include<math.h>
// toh(number of disk , source of disk , helping disk , final disk )
void toh(int n,int a,int b,int c)
{
    if(n>0)
    {
        toh(n-1,a,c,b);//here moving to b
        printf("(%dto%d)",a,c);
        toh(n-1,b,a,c);//here moving to c
    }
}
int main()
{
    int n;
    printf("Enter the total number of disck");
    scanf("%d",&n);
    // here we have three tower which names 1 2 3
    printf("Moves performed\n");
    toh(n,1,2,3);
    printf("\nTotal Moves performed=%d",(int)pow(2,n)-1);
    // total number of moves 2^n - 1
}