#include <stdio.h>
#include <stdlib.h>

struct values
{
    int *jobno;
    int *dad;
    int *profit;
};
void swapf(float *a, float *b);
void swap(int *a, int *b);
// modifying sort function according to structure
//  take structure stored in main and then total number of items
void sort012(struct values *temp, int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

    {

        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)

        {
            if (temp->profit[j] < temp->profit[j + 1])
            {
                swap(&temp->profit[j], &temp->profit[j + 1]);
                swap(&temp->dad[j], &temp->dad[j + 1]);
                swap(&temp->jobno[j], &temp->jobno[j + 1]);
            }
        }
    }
}

// swapping values
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapf(float *a, float *b)
{
    float temp = *a;
    *a = *b;
    *b = temp;
}
int maxf(struct values *temp, int n)
{
    int max = temp->dad[0];
    for (int i = 0; i < n; i++)
    {
        if (max < temp->dad[i])
        {
            max = temp->dad[i];
        }
    }
    return max;
}
int main()
{
    struct values arr;
    int n;
    printf("Enter the total number of jobs:");
    scanf("%d",&n);
    int j[n];
    int p[n] ;
    int d[n] ;
     printf("Enter Job No DeadLine Profit \n");
    for (int i = 0; i < n; i++)
    { 
        scanf("%d", &j[i]);
        scanf("%d", &d[i]);     
        scanf("%d", &p[i]);
    }
    
    arr.jobno = j;
    arr.dad = d;
    arr.profit = p;
    // sorting array using pibywi's values

    printf("Before sorting\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr.jobno[i]);
        printf("%d ", arr.dad[i]);
        printf("%d ", arr.profit[i]);
        printf("\n");
    }
    sort012(&arr, n);
    printf("After sorting Aray\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr.jobno[i]);
        printf("%d ", arr.dad[i]);
        printf("%d ", arr.profit[i]);
        printf("\n");
    }
    int max;
    max = maxf(&arr, n);
    // printf("Maximum Dad is %d", max);

    int take_job[max];
    for (int i = 0; i <max; i++)
    {
       take_job[i]=0;
    }
    
    for (int i = 0; i <n; i++)
    {
        if (take_job[arr.dad[i]-1] == 0)
        {
            take_job[arr.dad[i]-1] = arr.jobno[i];
        }
        else
        {
            for (int j = i-1; j > -1; j--)
            {
                //we are checking previous postion is empty or not
                if (take_job[j] == 0 && arr.dad[i]>j-1)
                {
                    take_job[j] = arr.jobno[i];
                }

                // occupied hai but profit less than present wale se check else condition  
                else
                {
                    if(arr.profit[i]>arr.profit[j]&& arr.dad[i]>j-1)
                    {
                        take_job[j] = arr.jobno[i];
                    }
                }
            }

           
        }
    }
    printf("MAX VALUE IS %d",max);
    printf("\nResult:");
    for (int i = 0; i <max; i++)
    {
        printf("%d ", take_job[i]);
    }
    return 0;
}