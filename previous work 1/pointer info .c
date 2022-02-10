#include <stdio.h>
int main()
    {   int i=65;
        int *j;//the decleration of the pointer.
        j=&i;//now j store the address of i.
        int **k=&j;//the declaration of pointer to pointer 
        printf("the value of i is %d\n",i);
        printf("the value of i is %u\n",*j);//the way to print the pointer %d is also valid
        printf("the addres of i is %u\n",&i);//to print the addres  of i use %u
        printf("the addres of i is %u\n",j);
        printf("the addres of j is %u\n",&j);
        printf("the addres of jis %u\n",k);//pointer to pointer defination
        
        return 0;

    }
