#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;

int medianarr[100];
int top = -1;

int max(int a, int b)
{
    return (a >= b) ? a : b;
}
struct node *createNode(int data)
{
    struct node *head = (struct node *)malloc(sizeof(node));
    head->data = data;
    head->left = NULL;
    head->right = NULL;
    return head;
}

struct node *insert(struct node *rootnode, int data)
{
    if (rootnode == NULL)
    {
        rootnode = createNode(data);
    }
    else if (data > rootnode->data)
    {
        rootnode->right = insert(rootnode->right, data);
    }
    else
    {
        rootnode->left = insert(rootnode->left, data);
    }
    return rootnode;
}

int LCA(struct node *head, int n1, int n2)
{
    if (head->data > n1 && head->data < n2 || head->data < n1 && head->data > n2)
        return head->data;
    else if (head->data == n1 || head->data == n2)
        return head->data;
    else if (head->data > n1 && head->data > n2)
        LCA(head->left, n1, n2);
    else
        LCA(head->right, n1, n2);
}

int height(struct node *node)
{
    /* base case tree is empty */
    if (node == NULL)
        return 0;

    return 1 + max(height(node->left), height(node->right));
}

int isBalanced(struct node *root)
{
    int lh;
    int rh;

    if (root == NULL)
        return 1;

    lh = height(root->left);
    rh = height(root->right);

    if (abs(lh - rh) <= 1 && isBalanced(root->left) && isBalanced(root->right))
        return 1;

    return 0;
}

void printnum(struct node *head, int k1, int k2)
{
    if (head == NULL)
        return;
    printnum(head->left, k1, k2);
    if (head->data >= k1 && head->data <= k2)
        printf("%d  ", head->data);
    printnum(head->right, k1, k2);
}

void Inorder(struct node *head)
{
    if (head != NULL)
    {
        static int i = 0;
        Inorder(head->left);
        medianarr[++top] = head->data;
        Inorder(head->right);
    }
}

int main()
{

    int n;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    int arr[n];
    printf("ENTER THE ELEMENTS:");
    struct node *head = NULL;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        head = insert(head, arr[i]);
    }

    printf("ENTER THE RANGE:");
    int k1, k2;
    scanf("%d %d", &k1, &k2);
    printf("THE NUMBERS BETWEEN THIS RANGE ARE:");
    printnum(head, k1, k2);

    printf("\nENTER THE TWO NO FOR LCA:");
    int l1, l2, ans;
    scanf("%d %d", &l1, &l2);

    ans = LCA(head, l1, l2);
    printf("%d", ans);
    printf("\nENTER THE VALUE OF K:");
    int k;
    scanf("%d", &k);
    Inorder(head);
    printf("THE Kth SMALLEST ELEMENT IS:%d", medianarr[k - 1]);
    int balanced = isBalanced(head);
    if (balanced)
        printf("\nTHE BST IS BALANCED:");
    else
        printf("\nTHE BST IS NOT BALANCED:");
    return 0;
}