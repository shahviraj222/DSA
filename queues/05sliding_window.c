#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *front = NULL, *rear = NULL;

void enqueue_back(int x)
{
    struct Node *t;
    t = (struct Node *)malloc(sizeof(struct Node));
    if (t == NULL)
        printf("Queue is FUll\n");
    else
    {
        t->data = x;
        t->next = NULL;
        if (front == NULL)
            front = rear = t;
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}

int dequeue_front()
{
    int x = -1;
    struct Node *t;
    if (front == NULL)
        printf("Queue is Empty\n");
    else
    {
        x = front->data;
        t = front;
        // automatically first node delete wala case is covered
        front = front->next;
        free(t);
    }
    return x;
}

int dequeue_back()
{
    int x = -1;
    struct Node *t = front;
    struct Node *q = front->next;
    if (front == NULL)
        printf("Queue is Empty\n");
    else
    {
        // time complexity=o(n)
        while (q != rear && q != NULL)
        {
            q = q->next;
            t = t->next;
        }
        t->next = NULL;
        //this condition belongs to delete first node or head node
        if (t == front && q == NULL)
        {
            front = rear = NULL;
            x = t->data;
            free(t);
        }
        else
        {
            rear = t;
            x = q->data;
            free(q);
        }
    }
    return x;
}
void print_max(int a[], int n, int k)
{
    // max_upto array stores the index
    // upto which the maximum element is a[i]
    // i.e. max(a[i], a[i + 1], ... a[max_upto[i]]) = a[i]
    int max_upto[n];
    // Update max_upto array similar to
    // finding next greater element
    enqueue_back(0);
    for (int i = 1; i < n; i++)
    {
        while (front != NULL && a[rear->data] < a[i])
        {
            max_upto[front->data] = i - 1;
            dequeue_front();
        }
        enqueue_back(i);
    }
    while (front != NULL)
    {
        max_upto[front->data] = n - 1;
        dequeue_back();
    }
    int j = 0;
    for (int i = 0; i <= n - k; i++)
    {
        // j < i is to check whether the
        // jth element is outside the window
        while (j < i || max_upto[j] < i + k - 1)
            j++;
        printf("%d ", a[j]);
    }
    printf("\n");
}

void Display()
{
    struct Node *p = front;
    if (p == NULL)
    {
        printf("EMPTY");
    }
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}
int main()
{
    int n, k;
    printf("Enter the total element of:");
    scanf("%d", &n);
    int *a = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value:");
        scanf("%d", &a[i]);
    }
    printf("Enter the size of Window:");
    scanf("%d", &k);
    printf("Final Result\n");
    print_max(a, n, k);
    return 0;
}