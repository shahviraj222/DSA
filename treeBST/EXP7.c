#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
struct Node
{
    char value;
    struct Node *left;
    struct Node *right;
};

#define MAX 50 
int top = -1;
struct Node *arr[MAX];

void push(struct Node *item)

{
    if (top == MAX - 1)
    {
        printf("Stack Overflow");
        return;
    }
    else
    {
        arr[++top] = item;
    }
}

struct Node *pop()
{
    struct Node *val;
    if (top == -1)
    {
        printf("Stack underflow");
    }
    else
    {
        val = arr[top];
        --top;
    }
    return val;
}

struct Node *createbstnode(char value)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->value = value;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

void inorder(struct Node *root1)
{
    if (root1 != NULL)
    {
        inorder(root1->left);
        printf("%c", root1->value);
        inorder(root1->right);
    }
}

void postorder(struct Node *root1)
{
    if (root1 != NULL)
    {
        postorder(root1->left);

        postorder(root1->right);
        printf("%c", root1->value);
    }
}

void preorder(struct Node *root1)
{
    if (root1 != NULL)
    {
        printf("%c", root1->value);
        preorder(root1->left);
        preorder(root1->right);
    }
}

int main()
{
    void push(struct Node *);
    void inorder(struct Node *);
    void postorder(struct Node *);
    void preorder(struct Node *);
    struct Node *root1;
    struct Node *root;
    char s[100];

    printf("Enter postfix expression : ");
    scanf("%s", s);
    int l;
    l = strlen(s);
    for (int i = 0; i < l; i++)
    {
        if (isalpha(s[i]))
        {
            root1 = createbstnode(s[i]);
            push(root1);
        }
        else
        {
            root1 = createbstnode(s[i]);
            root1->right = pop();
            root1->left = pop();
            push(root1);
        }
    }
    printf("Infix :");
    inorder(root1);
    printf("\n");
    printf("Postfix :");
    postorder(root1);
    printf("\n");
    printf("Prefix :");
    preorder(root1);

    return 0;
}
