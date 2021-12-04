#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int coeff;
    int pow;
    struct Node *next;
};
void read(struct Node **poly)
{
    int coeff, exp, cont;
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    *poly = temp;
    do
    {
        printf("\n Coeffecient: ");
        scanf("%d", &coeff);
        printf("\n Exponent: ");
        scanf("%d", &exp);
        temp->coeff = coeff;
        temp->pow = exp;
        temp->next = NULL;
        printf("\nHave more terms? 1 for y and 0 for no: ");
        scanf("%d", &cont);
        if (cont == 1)
        {
            temp->next = (struct Node *)malloc(sizeof(struct Node));
            temp = temp->next;
            temp->next = NULL;
        }
        else
        {
            break;
        }
    } while (cont);
}
void dis(struct Node *poly)
{
    printf("\nPolynomial expression is: ");
    while (poly != NULL)
    {
        printf("%dX^%d", poly->coeff, poly->pow);
        poly = poly->next;
        if (poly != NULL)
            printf("+");
    }
}
void add(struct Node **result, struct Node *first, struct Node *second)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->next = NULL;
    *result = temp;
    while (first && second)
    {
        if (first->pow > second->pow)
        {
            temp->coeff = first->coeff;
            temp->pow = first->pow;
            first = first->next;
        }
        else if (first->pow < second->pow)
        {
            temp->coeff = second->coeff;
            temp->pow = second->pow;
            second = second->next;
        }
        else
        {
            temp->coeff = first->coeff + second->coeff;
            temp->pow = first->pow;
            first = first->next;
            second = second->next;
        }
        if (first && second)
        {
            temp->next = (struct Node *)malloc(sizeof(struct Node));
            temp = temp->next;
            temp->next = NULL;
        }
    }
    while (first || second)
    {
        temp->next = (struct Node *)malloc(sizeof(struct Node));
        temp = temp->next;
        temp->next = NULL;
        if (first)
        {
            temp->coeff = first->coeff;
            temp->pow = first->pow;
            first = first->next;
        }
        else if (second)
        {
            temp->coeff = second->coeff;
            temp->pow = second->pow;
            second = second->next;
        }
    }
}
void sub(struct Node **result, struct Node *first, struct Node *second)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->next = NULL;
    *result = temp;
    while (first && second)
    {
        if (first->pow > second->pow)
        {
            temp->coeff = first->coeff;
            temp->pow = first->pow;
            first = first->next;
        }
        else if (first->pow < second->pow)
        {
            temp->coeff = second->coeff;
            temp->pow = second->pow;
            second = second->next;
        }
        else
        {
            temp->coeff = first->coeff - second->coeff;
            temp->pow = first->pow;
            first = first->next;
            second = second->next;
        }
        if (first && second)
        {
            temp->next = (struct Node *)malloc(sizeof(struct Node));
            temp = temp->next;
            temp->next = NULL;
        }
    }
    while (first || second)
    {
        temp->next = (struct Node *)malloc(sizeof(struct Node));
        temp = temp->next;
        temp->next = NULL;
        if (first)
        {
            temp->coeff = first->coeff;
            temp->pow = first->pow;
            first = first->next;
        }
        else if (second)
        {
            temp->coeff = second->coeff;
            temp->pow = second->pow;
            second = second->next;
        }
    }
}
void mul(struct Node **result, struct Node *first, struct Node *second)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->next = NULL;
    *result = temp;
    if (first == NULL || second == NULL)
    {
        printf("0");
        return;
    }
    while (first != NULL)
    {
        while (second != NULL)
        {
            temp->next = (struct Node *)malloc(sizeof(struct Node));
            temp->next = NULL;
            temp->coeff = first->coeff * second->coeff;
            temp->pow = first->pow + second->pow;
            second = second->next;
            temp = temp->next;
        }
        first = first->next;
    }
}
int main()
{
    struct Node *first = NULL;
    struct Node *second = NULL;
    struct Node *result = NULL;
    int sel;
    printf("\nEnter the corresponding data:-\n");
    printf("\nSelect what you wnat to do\n");
    printf("\n1-Add\n2-Subtract\n3-Multiplication\n");
    scanf("%d", &sel);
    printf("\nFirst polynomial:\n");
    read(&first);
    dis(first);
    printf("\nSecond polynomial:\n");
    read(&second);
    dis(second);
    if (sel == 1)
    {
        add(&result, first, second);
        dis(result);
    }
    else if (sel == 2)
    {
        sub(&result, first, second);
        dis(result);
    }
    else if (sel == 3)
    {
        mul(&result, first, second);
        dis(result);
    }
    else
    {
        printf("Wrong input");
    }
    return 0;
}