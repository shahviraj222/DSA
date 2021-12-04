#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct Node
{
    int coeff;
    int exp;
    struct Node *next;
} *poly = NULL;
struct Node* create()
{   struct Node*p;
    struct Node *t, *last = NULL;
    int num, i;
    printf("Enter number of terms");
    scanf("%d", &num);
    printf("Enter each term with coeff and exp\n");
    for (i = 0; i < num; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        scanf("%d%d", &t->coeff, &t->exp);
        t->next = NULL;
        if (poly == NULL)
        {
            poly = last = t;
        }
        else
        {
            last->next = t;
            last = t;
        }
    }
    p=poly;
    return p;
}
void Display(struct Node *p)
{
    while (p)
    {
        printf("%dx%d +", p->coeff, p->exp);
        p = p->next;
    }
    printf("\n");
}
long Eval(struct Node *p, int x)
{
    long val = 0;
    while (p)
    {
        val += p->coeff * pow(x, p->exp);
        p = p->next;
    }
    return val;
}
struct Node * add(struct Node *p1,struct Node *p2)
{
    struct Node*p;
    struct Node *t, *last = NULL;
    int num=5, i;
    for (i = 0; i < num; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        scanf("%d%d", &t->coeff, &t->exp);
        t->next = NULL;
        if (poly == NULL)
        {
            poly = last = t;
        }
        else
        {
            last->next = t;
            last = t;
        }
    }
    p=poly;
    while(p!=NULL){
    if (p1->exp>p2->exp)
    {
        p->coeff=p1->coeff;
        p->exp=p1->exp;
        p=p->next;
        p1=p1->next;
    }
    else if (p2->exp>p1->exp)
    {
        p->coeff=p2->coeff;
        p->exp=p2->exp;
        p=p->next;
        p2=p2->next;
    }
    else
    {
        p->coeff=p1->coeff+p2->coeff;
        p->exp=p1->exp;
        p=p->next;
        p1=p1->next;
        p2=p2->next;
    }
    }
    return poly;
    
    
}
int main()
{
    struct Node *p1=create();
   
    struct Node *p2=create(); // ****here my programm crash****
    struct Node *p3=add(p1,p2);
    Display(p3);
    // printf("%ld\n", Eval(poly, 1));
    return 0;
}