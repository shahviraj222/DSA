#include <stdio.h>
#include <math.h>
int main()

{
    int n, pos = 0, sea;
    int j = 1;
    int *arr = (int *)malloc(n * sizeof(int));
    printf("\nenter the total no to given::");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter the %d no::", j);
        scanf("%d", &arr[i]);
        j++;
    }
    printf("Enter the number to search in given index::");
    scanf("%d", &sea);
    // if arrya is given in diffrent oder like
    //arr={123,34,24345,545,35,32,5,432}
    //then calulate the size of arry as show below
    //int size=sizeof(arr)/sizeof(int) 
    //it is my n in this case ,total number of element in arrya
    for (int i = 0; i < n; i++)
    {
        if (sea == arr[i])
        {
            pos = i + 1;
            printf("YOur number is find at arr[%d]", i);
            printf("Your number is find at postion on %d", pos);
            break;
        }
        else
        {
            pos = 0;
        }
    }
    if (pos == 0)
    {
        printf("No such element will be find on the given array index\n");
    }
    return 0;
}
