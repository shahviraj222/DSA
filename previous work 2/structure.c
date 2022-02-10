#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student_info
{
    int rollno;
    char name[100];
}s[10];
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void sort(int n)
{
    char temp[100];
     for (int i = 0; i < n-1; i++)        
    {   for (int j = 0; j < n-i-1; j++) 
        {   if (s[j].rollno > s[j+1].rollno)
             {
                  swap(&s[j].rollno, &s[j+1].rollno);
                  strcpy(temp,s[j].name);
                  strcpy(s[j].name,s[j+1].name);
                  strcpy(s[j+1].name,temp); 
             }  
        }
    }         
}
int main()
{
    int n;
    printf("how many student in your class:");
    scanf("%d",&n);
    printf("Enter student details as rollno and name \n");
    for (int i = 0; i <n; i++)
    {
        gets(s[i].name);               // also you can use fgets(variable,20,stdin);
        fflush(stdin);                 // "stdin" means take input from keyboard
        scanf("%d",&s[i].rollno);
    }
    sort(n);
    printf("Class 10 Student details\n");
      for (int i = 0; i <n; i++)
    {
       printf("---------Student Detail-----------\n");
       printf("RollNo:%d\n",s[i].rollno);
       printf("Name:%s\n",s[i].name);
    }
    
    return 0;
}