#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    printf("enter total number of your tring:");
    scanf("%d", &num);
    printf("enter your element is series like a b c\n");
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    int b=(num/2);
    int c=num-1;
    /* Write the logic to reverse the array. */
    for (int i=0; i < b; i++) 
    {   
        int temp;
        temp=arr[i];
        arr[i]=arr[c-i];
        arr[c-i]=temp;
    }

    for(i = 0; i < num; i++)
        printf("%d ", arr[i]);
    return 0;
}