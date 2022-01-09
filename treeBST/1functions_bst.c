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

//searching key element in BST tree using recursive methode
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
//searching key element in BST tree using itterative methode
struct node *Isearch(struct node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == key)
    {
        return root;
    }
    else if (root->data > key)
    {
        return Isearch(root->left, key);
    }
    else
    {
        return Isearch(root->right, key);
    }
}

//trraversal tree in Inorder way
// one interesting thing is inorder wala printing always give sorted elements
void inorder(struct node *root)
{
    if (root)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
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
    p = Isearch(root, 5);
    if (p == NULL)
    {
        printf("Element not find");
    }
    inorder(root);
    return 0;
}