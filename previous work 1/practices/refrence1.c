#include <stdio.h>
int printaddd(int*a)

{

    *a=*(a)*10;
    
}
    
int main()
{
    int i;
    i=5;
    printf("the value of i before calling the function is %d \n",i);
  //  printf(" the address of i is %u\n ",&i);// the actual addres of i is printed 
    printaddd(&i);
    printf("the value of i after calling the function is %d \n",i);
    return 0;
}
