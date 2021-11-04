#include<stdio.h>
void check(char *A,char *B)
{
    int h[26]={0};
    printf("%d %d",sizeof(A),sizeof(B));        // value of A,B are here
    if (sizeof(A)!=sizeof(B))                   // this logic don't work
    {
        printf("Not anagram");
    }
    else
    {
    for (int i = 0; A[i]!='\0'; i++)
    {
       h[A[i]-97]++;
    }
    int i;
    for ( i = 0;B[i]!='\0'; i++)
    {
        h[A[i]-97]--;
        if (h[i]==0)                     //zero is greater if h[i]=-1
        {
           printf("\nnot anagram");
           break;
        }
        
    }
    if (B[i]=='\0')
    {
    printf("\nanagram");
        /* code */
    }
    
    }
}
int main()
{
    char a[]="decimal";
    char b[]="sa";
    check(a,b);
    printf("\nvalue in main %d %d",sizeof(a),sizeof(b));
    return 0;
}