// Not working in vs code 
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int coeff;
    int expo;
    struct Node *next;
};
struct Node *create(int c, int e)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    p->coeff = c;
    p->expo = e;
    p->next = NULL;
    return p;
}
struct Node *insert_end(struct Node *head, int c, int e)
{
    struct Node *temp = create(c, e);
    struct Node *last;
    if (head == NULL)
    {
        head = temp;
        last = head;
    }
    else
    {
        last->next = temp;
        last = last->next;
    }
    return head;
}
void Display(struct Node *p)
{
    struct Node *t = p;
    if (t == NULL)
    {
        printf("Polynomial is Empty!");
    }
    else
    {
        while (t != NULL)
        {
            if (t->next == NULL)
            {
                printf("%dx^%d", t->coeff, t->expo);
            }
            else
            {
                printf("%dx^%d+", t->coeff, t->expo);
            }
            t = t->next;
        }
        printf("\n");
    }
}
void addTwo(struct Node *p1, struct Node *p2)
{
    struct Node *head1 = p1;
    struct Node *head2 = p2;
    struct Node *head3 = NULL;
    int c, e;
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->expo == head2->expo)
        {
            c = head1->coeff + head2->coeff;
            e = head1->expo;
            head1 = head1->next;
            head2 = head2->next;
        }
        else if (head1->expo > head2->expo)
        {
            c = head1->coeff;
            e = head1->expo;
            head1 = head1->next;
        }
        else
        {
            c = head2->coeff;
            e = head2->expo;
            head2 = head2->next;
        }
        head3 = insert_end(head3, c, e);
    }
    if (head1)
    {
        head3 = insert_end(head3, head1->coeff, head1->expo);
        head1 = head1->next;
    }
    else if (head2)
    {
        head3 = insert_end(head3, head2->coeff, head2->expo);
        head2 = head2->next;
    }
    printf("\nAfter adding two Polynomial\n Result=");
    Display(head3);
}
void sub(struct Node *p1, struct Node *p2)
{
    struct Node *head3 = NULL;
    struct Node *head1 = p1;
    struct Node *head2 = p2;
    int c, e;
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->expo == head2->expo)
        {
            c = head1->coeff - head2->coeff;
            e = head1->expo;
            head1 = head1->next;
            head2 = head2->next;
        }
        else if (head1->expo > head2->expo)
        {
            c = head1->coeff;
            e = head1->expo;
            head1 = head1->next;
        }
        else
        {
            c = -(head2->coeff);
            e = head2->expo;
            head2 = head2->next;
        }
        head3 = insert_end(head3, c, e);
    }
    if (head1)
    {
        head3 = insert_end(head3, head1->coeff, head1->expo);
        head1 = head1->next;
    }
    else if (head2)
    {
        head3 = insert_end(head3, head2->coeff, head2->expo);
        head2 = head2->next;
    }
    printf("\nAfter sub two Polynomial\n Result=");
    Display(head3);
}
void mul(struct Node *p1, struct Node *p2)
{
    struct Node *head3 = NULL;
    struct Node *head1 = p1;
    struct Node *head2 = p2;
    int c, e;
    while (head1 != NULL)
    {
        while (head2 != NULL)
        {
            e = head1->expo + head2->expo;
            c = head1->coeff * head2->coeff;
            head3 = insert_end(head3, c, e);
            head2 = head2->next;
        }
        head2 = p2;
        head1 = head1->next;
    }
    printf("\nAfter multiply\n Result=");
    Display(head3);
}
int main()
{
    struct Node *head1 = NULL, *head2 = NULL;
    int c, e, n;
    printf("Enter the total number of term:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the Coeficent and Exponet of %dth term:", i + 1);
        scanf("%d %d", &c, &e);
        head1 = insert_end(head1, c, e);
    }
    printf("A=");
    Display(head1);
    printf("\nEnter the total number of term:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the Coeficent and Exponet of %dth term:", i + 1);
        scanf("%d %d", &c, &e);
        head2 = insert_end(head2, c, e);
    }
    printf("B=");
    Display(head2);
    int choice, ch;
    do
    {
        printf("1. Addition\n2. Subrtaction\n3. Multiplication\nEnter your choice = ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            addTwo(head1, head2);
            break;
        case 2:
            sub(head1, head2);
            break;
        case 3:
            mul(head1, head2);
            break;
        }
        printf("Do you want to continue (1/0) = ");
        scanf("%d", &ch);
    } while (ch != 0);

    return 0;
}