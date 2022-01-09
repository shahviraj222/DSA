// this function is used to understand how i create my first tree
#include <stdio.h>
#include <stdlib.h>
// this is use for creating tree
struct Node
{
    struct Node *left_child;
    int data;
    struct Node *right_child;
};
// this queue is used store the address of all the tree
struct queue
{
    struct Node *p;
    struct queue *next;
};
// global variable to store the dequed address
struct queue devalue;
struct queue *enqueue(struct Node *p, struct queue *q)
{
    struct queue *t;
    struct queue *r;
    struct queue *temp = q;
    // // this is reason why we have to give return pointer also don't write
    // struct queue *last; //to avoid the unaessary loop
    t = (struct queue *)malloc(sizeof(struct queue));
    t->next = NULL;
    if (t == NULL)
        printf("Queue is FUll\n");
    else
    {
        t->p = p; //here tree pointinf is done
        if (q == NULL)
        {
            q = t;
            q->next = NULL;
        }
        else
        {
            while (temp->next)
            {
                temp = temp->next;
            }
            temp->next = t;
        }
    }
    r = q;
    return r;
}

// deleting node from head
struct queue *dequeue(struct queue *q1)
{
    // here i am not deleting tree i want to delete the queue's value
    struct queue *t;
    t = (struct queue *)malloc(sizeof(struct queue));
    if (q1 == NULL)
        printf("Queue is Empty\n");

    else
    {
        devalue.p = q1->p; //store deleted node value
        t->p = q1->p;
        q1 = q1->next; //in this first node delete wala case is covered
        free(t);
    }
    return q1;
}

struct Node *create(struct Node *root, int *a, int n)
{
    // we are cerating queue to store the address of tree nodes
    struct queue *q = NULL;
    struct Node *p = NULL;
    struct Node *t;
    int x;

    // root create
    root = (struct Node *)malloc(sizeof(struct Node));
    root->data = a[0];
    root->left_child = root->right_child = NULL;

    q = enqueue(root, q); //store root in queue
    int i = 1;
    while (i < n)
    {
        q = dequeue(q);
        p = devalue.p;

        //creating new node in left

        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = a[i];
        i++;
        t->left_child = t->right_child = NULL;
        p->left_child = t;
        q = enqueue(t, q);

        //creating new node right

        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = a[i];
        i++;
        t->left_child = t->right_child = NULL;
        p->right_child = t;
        q = enqueue(t, q);
    }
    return root;
}
struct queue *dequeue_last(struct queue *q1)
{
    struct queue *t;
    struct queue *t2;
    if (q1 == NULL)
        printf("Queue is Empty\n");
    else
    {
        t = q1->next;
        t2 = q1;
        while (t->next != NULL)
        {
            t = t->next;
            t2 = t2->next;
        }
        if (t2 == q1)
        {
            q1 = NULL;
            devalue.p = NULL;
            free(t);
        }
        else
        {
            devalue.p = t->p;
            t2->next = NULL;
            free(t);
        }
    }
    return q1;
}

//isme right tree me nahi ja raha hai some error
void Ipreorder(struct Node *p)
{
    struct queue *st = NULL;
    while (p != NULL || st != NULL)
    {
        if (p != NULL)
        {
            printf("%d ", p->data);
            st = enqueue(p, st);
            p = p->left_child;
        }
        else
        {
            st = dequeue_last(st);
            p = devalue.p;
            p = p->right_child;
        }
    }
}
void preorder(struct Node *p)
{
    if (p)
    {
        printf("%d ", p->data);
        preorder(p->left_child);
        preorder(p->right_child);
    }
}

// finding height of tree
int height_tree(struct Node *root)
{
    if (root->left_child==NULL && root->right_child==NULL)
    {
        return 0;
    }
    else
    {
        if (root)
        {
            int x,y;
            x=height_tree(root->left_child);
            y=height_tree(root->left_child);
            if (x>y)
            {
                return x+1;
            }
            else
            {
                return y+1;
            }
        }
    }
    return 0;
}
int main()
{
    struct Node *root = NULL;
    int n;
    printf("Enter the total number of element:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %dth element:", i + 1);
        scanf("%d", &arr[i]);
    }

    root = create(root, arr, n);
    //    printf("Root values is %d",root->data);
    preorder(root);
    printf("\nH=%d",height_tree(root));
    return 0;
}