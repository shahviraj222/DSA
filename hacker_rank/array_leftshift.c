// here i get d for how many rotation and arr_count is numer of elemnt and returning new array created 
int *rotateLeft(int d, int arr_count, int *arr, int *result_count)
{
    *result_count = arr_count;
    int *b = (int *)malloc(sizeof(int) * arr_count);
    int t = 0;
    // using d directly
    for (int i = 0; i < arr_count; i++)
    {
        if (d < arr_count)
        {
            b[i] = arr[d];
            d++;
        }
        else
        {
            b[i] = arr[t];
            t++;
        }
    }
    return b;
}