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
struct node *lca(struct node *root, int n1, int n2)
{
    while (root)
    {
        if (n1 < root->data && n2 < root->data)
        {
            root = root->left;
        }
        else if (n1 > root->data && n2 > root->data)
        {
            root = root->right;
        }
        else
        {
            break;
        }
    }
    return root;
}
struct node *search(struct node *root, int key)
{
    while (root)
    {
        if (root->data == key)
        {
            return root;
        }
        else if (root->data > key)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return NULL;
}
int main()
{
    int n, t, n1, n2;
    struct node *root = NULL, *p, *q;
    printf("Enter the number element in BST:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter %dth element:", i + 1);
        scanf("%d", &t);
        root = insertNode(root, t);
    }
    printf("Enter the number to find LCA N1=:");
    scanf("%d",&n1);
    printf("Enter the number to find LCA N2=:");
    scanf("%d",&n2);
    p = search(root, n1);
    q = search(root, n2);
    if (p == NULL || q == NULL)
    {
        printf("Entered data is not in tree");
    }
    else
    {
        p = lca(root, n1, n2);
        printf("LCA of %d and %d is %d", n1, n2, p->data);
    }
    return 0;
}