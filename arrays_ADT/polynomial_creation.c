#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct term
{
   int coie;
   int expo;
};
struct poly
{
    int n;
    struct term *t;
};
struct poly* creatre_poly()
{
    struct poly *q;
    struct poly p;
    q=&p;
    printf("Enter the nonzero term in expression:");
    scanf("%d",&p.n);
    // here we access the element by A[0],A[1],....A[4]
    int *A;
    A=(int*)malloc(sizeof(int)*5);
// same way as we access A[] here p.t[i].expo;
    p.t=(struct term*) malloc(sizeof(struct term)*p.n);
    printf("Enter the coieficent and exponetial value one by one\n");
    int a=1;
    for (int i = 0; i < p.n; i++)
    {
        printf("Enter %dth term",i+1);
        scanf("%d %d",&p.t[i].coie,&p.t[i].expo);
    }
    // evolution(2,p);
    return q;
}
int evolution(int x,struct poly p)
{
    int sum=0;
    for (int i = 0; i <p.n; i++)
    {
        sum=sum+pow(x,p.t[i].expo)*p.t[i].coie;
    }
    printf("Your expression Valued is %d",sum);
    return sum;
}

// some error is there find it 
void add_polynomial(struct poly p1,struct poly p2)
{
    struct poly p3;
    if (p1.n>p2.n)
    {
        p3.n=p1.n;
    }
    else
    {
        p3.n=p2.n;
    }
    int i=0,j=0,k=0;
    while (i<p1.n && j<p2.n)
    {
    
    if (p1.t[i].expo > p2.t[j].expo)
    {
        p3.t[k++]=p1.t[i++];
    }
    else if (p2.t[j].expo>p1.t[i].expo)
    {
        p3.t[k++]=p2.t[j++];
    }
    else
    {
        p3.t[k].expo= p2.t[j].expo;
        p3.t[k++].coie=p2.t[j++].coie+p1.t[k++].coie;
    }
    }
    for (size_t i = 0; i < p3.n; i++)
    {
        printf("%d %d +",p3.t[i].coie,p3.t[i].expo);
    }     
}
int main() 
{
    struct poly *p1,*p2;
    p1=creatre_poly();
    p2=creatre_poly();
    add_polynomial(*p1,*p2);//derefresing of pointer used here
    return 0;
}


