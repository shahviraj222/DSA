#include <stdio.h>
int main()
{   int q;
    struct info
    {
        char name[50];
        int age;
        int km;
        char route[50];
    };
    struct info s[100];
  
  printf("\t\t*****************WELCOME TO SHAH TRAVEL AGENCY*****************");
     for (int i = 0; i < 2; i++)
     {
          printf("\nEnter your name:");
          scanf("%s", &s[i].name);
          printf("\nEnter your age:");
          scanf("%d", &s[i].age);
          printf("\nEnter your travel experience in km:");
          scanf("%d", &s[i].km);
          printf("\nEnter the name of route you want to become driver:");
          scanf("%s", &s[i].route);
      }
    for (int i = 0; i < 2; i++)
    {
        printf("*****************Detail of driver %d*****************\n",i+1);
        printf("Name:%s\tage:%d\n",s[i].name,s[i].age);
        printf("Route:%s\n",s[i].route);
        printf("Driver have experience of %dkm\n",s[i].km);

    }
    

    return 0;
}