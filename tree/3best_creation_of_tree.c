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

// here we are inserting the data in sorted manner
struct node *insertNode(struct node *root, int data)
{
    if (root == NULL)
        root = create(data);
    else if (data < root->data)
        root->left = insertNode(root->left, data);//this imp see carefully
    else
        root->right = insertNode(root->right, data);//this imp see carefully
    return root;
}

void preorder(struct node *p)
{
    if (p)
    {
        printf("%d ", p->data);
        preorder(p->left);
        preorder(p->right);
    }
}
int main()
{
    int n,data;
    struct node *tree = NULL;
    printf("Enter number of elements in array:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter number %dth element:",i+1);
        scanf("%d",&data);
        tree = insertNode(tree, data);
    }
    preorder(tree);
    return 0;
}