#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct Node
{
    int exp;
    int coie;
    struct Node *next;
};
//hera i have not consider last node wala concept 
void create(int c ,int x,struct Node *head)
{       
        struct Node *last=head;
        while (last->next!=NULL)
        {
            last=last->next;
        }
        struct Node *p;
        p=(struct Node*)malloc(sizeof(struct Node));
        p->coie=c;
        p->exp=x;
        p->next=NULL;
        last->next=p;
   
}
void Display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%dx^%d+",p->coie,p->exp);
        p=p->next;
    }
    
}
int evoluation(int x,struct Node head)
{
    struct Node *p=&head;
    int sum=0;
    while (p!=NULL)
    {
      sum=sum+pow(x,p->exp)*p->coie;
      p=p->next;
    }
    printf("the evoluation of expression is %d\n",sum);
}
int main()
{
    struct Node head;
    head.next=NULL;
    int n,x,y;
    printf("Enter the number of non zero term in Expression:");
    scanf("%d",&n);
    printf("Enter the %dth term coefi and expo:",1);
    scanf("%d %d",&x,&y);
    head.coie=x;
    head.exp=y;
    for (int i =1; i <n; i++)
    {
        printf("Enter the %dth term coefi and expo:",i+1);
        scanf("%d %d",&x,&y);
        create(x,y,&head);
    }
    Display(&head);
    evoluation(2,head);
    return 0;
}