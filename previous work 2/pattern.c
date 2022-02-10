#include<stdio.h>
#include<stdlib.h>
// star printing
// imp if i write
// printf("*"); and printf("* ");
//this give me big difference
int pattern(int n)
{
    for (int i = 0; i < n; i++)        // this is for row 
    {
        for (int j = 1; j <= i+1; j++)    // this is for column
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
}
//odd star printing
int pattern1A(int n)
{
    for (int i = 0; i < n; i++)        // this is for row 
    {
        for (int j = 1; j <= (i); j++)    // this is for column
        {
            printf("* ");
        }
        printf("\n"); 
    }
    
}
// one side printing
// not efficent but sufficient O(n)=n^2
int pattern2(int n)
{
    for (int i = 0; i < n; i++)        // this is for row 
    {
         
        for (int j =0; j < n-i; j++)    // this is for column
        {
            printf(" ");
        
        }
        for (int k = 0; k <=i ; k++)
        {
           printf("* ");
        }
        
        printf("\n");
    }
    
}
// pyramidal O(n^2)
int pattern2A(int n)
{
    for (int i = 0; i <n; i++)        // this is for row 
    {
        for (int j = 0; j <n; j++)    // this is for column
        {
            if((i+j)>=n-1)
            printf("*");              // if printf("* "); then it give me pyramidal
            else
            printf(" ");
        }
        printf("\n");
    }
    
}


//***
//**
//*
void pattern2B(int n)
{
   for (int i = 0; i <=n; i++)        // this is for row 
    {
        for (int j = 0; j <=n-i; j++)    // this is for column
        {
           
            printf("* ");
            
            
        }
        printf("\n");
    }   
}


void pattern2B_a(int n)
{
   for (int i = 0; i <n; i++)        // this is for row 
    {
        for (int j = 0; j <n; j++)    // this is for column
        {
           if(j>=i)
            printf("%d",i);         // printf("* "); this give me pyramidal
            else
            printf(" ");
            
        }
        printf("\n");
    }   
}

//printing star in form of odd pyramids
void pattern3(int n)
{
    for (int i = 0; i <n; i++)
    {
      for (int j = 0; j <2*n; j++)
      {
          if (j >= n-i && j <= n+i)
          {
             printf("*");
          }
          else 
          {
              printf(" ");
          }
        
      }
      printf("\n");
      
    }
    
}
void pattern4(int n)
{
    for (int i = 0; i <n; i++)
    {
      for (int j = 0; j <n; j++)
      {
          if (j == 0 || j == n-1)
          {
             printf("*");
          }
          else if (i==0 || i==n-1 )
          {
              printf("*");
          }
          else
          {
              printf(" ");
          }
        
      }
      printf("\n");
      
    }
    
}
int main()
{
    int num;
    printf("enter nummber :");
    scanf("%d",&num);
    pattern4(num);
    return 0;
}