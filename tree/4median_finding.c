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
        root->left = insertNode(root->left, data);
    else
        root->right = insertNode(root->right, data);
    return root;
}

float findMed(struct node *root, int n)
{
    static int count = 0;
    static float evenMid = -1;
    if (root == NULL)
    {
        return -1;
    }

    float lMid = findMed(root->left, n);
    count++;

    if (lMid != -1)
    {
        return lMid;
    }
    else if (n % 2 != 0 && count == (n + 1) / 2)
    {
        return root->data;
    }
    else if (n % 2 == 0 && count == n / 2)
    {
        evenMid = root->data;
    }
    else if (n % 2 == 0 && count == (n / 2) + 1)
    {
        return (evenMid + root->data) / 2;
    }

    float rMid = findMed(root->right, n);

    return rMid;
}

int main()
{
    int n,data;
    float median;
    struct node *tree = NULL;
    printf("Enter number of elements in array:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter number %dth element:",i+1);
        scanf("%d",&data);
        tree = insertNode(tree,data);
    }
    median = findMed(tree, n);
    printf("Median= %.2f", median);
    return 0;
}