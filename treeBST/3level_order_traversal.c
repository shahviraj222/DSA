#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

struct node *create(int data)
{
    struct node *tree = (struct node *)malloc(sizeof(struct node));
    tree->data = data;
    tree->left = NULL;
    tree->right = NULL;
    return tree;
}

// recursive methode to create binary search tree
struct node *insertNode(struct node *root, int data)
{
    if (root == NULL)
        root = create(data);
    else if (data < root->data)
        root->left = insertNode(root->left, data); //this imp see carefully
    else
        root->right = insertNode(root->right, data); //this imp see carefully
    return root;
}
struct queue
{
   struct node* p;
   struct queue* next; 
};
// global variable to store the dequed address
struct queue devalue;
struct queue* enqueue(struct node* p,struct queue* q)
{
    struct queue *t;
    struct queue *r;
    struct queue *temp=q;
    // // this is reason why we have to give return pointer also don't write
    // struct queue *last; //to avoid the unaessary loop
    t = (struct queue *)malloc(sizeof(struct queue));
    t->next=NULL;
    if (t == NULL)
        printf("Queue is FUll\n");
    else
    {
        t->p = p; //here tree pointinf is done
        if (q == NULL)
            {
                q=t;
                q->next=NULL;
            }
        else
        {
            while (temp->next)
            {
              temp=temp->next;    
            }
            temp->next=t;
        }
    }
    r=q;
    return r;
}
// this function deleting the dequeue
struct queue* dequeue(struct queue* q1)
{
    // here i am not deleting tree i want to delete the queue's value
    struct queue *t;
    struct queue *t2=q1;
    t=(struct queue*)malloc(sizeof(struct queue));
    if (q1==NULL)
        printf("Queue is Empty\n");
    else
    { 
        devalue.p=q1->p; //this store the value whuch is deleted
        t->p=q1->p;
        q1=q1->next;//in this first node delete wala case is covered 
        free(t);
    }
    return q1;
}
void level_order(struct node* root)
{
    struct queue* q1=NULL; // don't forgot this
    struct node* temp;
    q1=enqueue(root,q1);
    while (q1)
    {
        q1=dequeue(q1);
        temp=devalue.p;
        if (temp->left)
        {
            q1=enqueue(temp->left,q1);
        }
        if (temp->right)
        {
           q1=enqueue(temp->right,q1);
        }
        printf("%d ",temp->data);
    }
    
}

int main()
{
    int n, t;
    struct node *root = NULL, *p;
    printf("Enter the number element in BST:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter %dth element:", i + 1);
        scanf("%d", &t);
        root = insertNode(root, t);
    }
    level_order(root);
    return 0;
}