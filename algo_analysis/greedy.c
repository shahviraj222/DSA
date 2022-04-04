#include <stdio.h>

// you can create instead of pointer (store diract values and then create array of structure  )

struct values

{

    int *itemsno;

    int *weight;

    int *profit;

    float *pibywi;
};

void swapf(float *a, float *b);

void swap(int *a, int *b);

// modifying sort function according to structure

// take structure stored in main and then total number of items

void sort012(struct values *temp, int n)

{

    int i, j;

    for (i = 0; i < n - 1; i++)

        // Last i elements are already in place

        for (j = 0; j < n - i - 1; j++)

        {

            if (temp->pibywi[j] > temp->pibywi[j + 1])

            {

                swapf(&temp->pibywi[j], &temp->pibywi[j + 1]);

                swap(&temp->weight[j], &temp->weight[j + 1]);

                swap(&temp->profit[j], &temp->profit[j + 1]);

                swap(&temp->itemsno[j], &temp->itemsno[j + 1]);
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

int main()

{

    // initializing data structure

    struct values arr;

    // temporary array for storing values

    int i[5] = {1, 2, 3, 4, 5};

    int w[5] = {15, 20, 65, 41, 12};

    int p[5] = {20, 56, 56, 52, 20};

    float pbyw[5];

    for (int i = 0; i < 5; i++)

    {

        pbyw[i] = (float)p[i] / (float)w[i];
    }

    // giving all values to structure

    arr.weight = w;

    arr.profit = p;

    arr.pibywi = pbyw;

    arr.itemsno = i;

    // printing values

    for (int i = 0; i < 5; i++)

    {

        printf("%d ", arr.itemsno[i]);

        printf("%d ", arr.weight[i]);

        printf("%d ", arr.profit[i]);

        printf("%f ", arr.pibywi[i]);

        printf("\n");
    }

    // sorting array using pibywi's values

    sort012(&arr, 5);

    printf("After sorting Aray\n");

    // after sorting

    for (int i = 0; i < 5; i++)

    {

        printf("%d ", arr.itemsno[i]);

        printf("%d ", arr.weight[i]);

        printf("%d ", arr.profit[i]);

        printf("%f ", arr.pibywi[i]);

        printf("\n");
    }

    return 0;
}