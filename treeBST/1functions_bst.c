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
// incomplete
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
int Height(struct node *root)
{
    if (root->left==NULL && root->right==NULL)
    {
        return 0;
    }
    else
    {
        // by converting the return statement we find many other value like 
        // 1.no of nodes (having n child)
        // 2.sum of all elements in tree 
        if (root)
        {
            int x,y;
            x=Height(root->left);
            y=Height(root->right);
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
struct node* inprede(struct node* root)
{
    while (root && root->right!=NULL)
    {
        root=root->right;
    }
    return root;
}

struct node* insuc(struct node* root)
{
    while (root && root->left!=NULL)
    {
        root=root->left;
    }
    return root;
}
struct node* delete(struct node* root,int key)
{
    //to store predecesor or succesor
    struct node* q;
    if (root==NULL)
    {
        return NULL;
    }
    // not able to under stand 
    // if (root->left==NULL && root->right==NULL)
    // {
    //     free(root);
    //     return NULL;
    // }
    if (key>root->data)
    {
        root->right=delete(root->right,key);
    }
    else if (key<root->data)
    {
        root->left=delete(root->left,key);
    }
    // element is found
    else
    {
        // we delete and replace inorder predecessor
        if (Height(root->left)>Height(root->right))
        {
            q=inprede(root->left);
            // replaceing data 
            root->data=q->data;
            root->left=delete(root->left,q->data);
        }
        else
        {
            q=insuc(root->right);
            root->data=q->data;
            root->right=delete(root->right,q->data);
        }
        
    }
    
    return root;
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
    root=delete(root,20);
    inorder(root);
    return 0;
}