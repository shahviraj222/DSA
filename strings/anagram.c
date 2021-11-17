// anagram means having same letter in both string basically combination of all letter are allowed
#include <stdio.h>
#include<string.h>
//using hash method we check anagram
void check(char *A, char *B)
{
    int h[26] = {0};                       // intialize all the element zero
    printf("%d %d", sizeof(A), sizeof(B)); // value of A,B are here is not working
    //here i have to say strlen(a) and strlen(b) then work #include<string.h>
    if (sizeof(A) != sizeof(B))            // this logic don't work 
    {
        printf("Not anagram");
    }
    else
    {
        for (int i = 0; A[i] != '\0'; i++)
        {
            h[A[i] - 97]++;
        }
        int i;
        for (i = 0; B[i] != '\0'; i++)
        {
            h[A[i] - 97]--;
            if (h[i] == 0)                       //zero is greater if h[i]=-1
            {
                printf("\nnot anagram");
                break;
            }
        }
        if (B[i] == '\0')
        {
            printf("\nanagram");
        }
    }
}
int main()
{
    char a[] = "decimal";
    char b[] = "sa";
    check(a, b);
    printf("\nvalue in main %d %d", sizeof(a), sizeof(b)); //here value of a,b is given right
    return 0;
}