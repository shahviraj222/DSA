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
int isBalanced(struct node* root, int* height)
{
    /* lh --> Height of left subtree 
     rh --> Height of right subtree */
    int lh = 0, rh = 0;

    /* l will be true if left subtree is balanced 
    and r will be true if right subtree is balanced */
    int l = 0, r = 0;

    if (root == NULL) {
        *height = 0;
        return 1;
    }

    /* Get the heights of left and right subtrees in lh and rh 
    And store the returned values in l and r */
    l = isBalanced(root->left, &lh);
    r = isBalanced(root->right, &rh);

    /* Height of current node is max of heights of left and 
     right subtrees plus 1*/
    *height = (lh > rh ? lh : rh) + 1;

    /* If difference between heights of left and right 
     subtrees is more than 2 then this node is not balanced
     so return 0 */
    if (abs(lh - rh) >= 2)
        return 0;

    /* If this node is balanced and left and right subtrees 
    are balanced then return true */
    else
        return l && r;
}
// what is this i am not getting 
void Print(struct node *root, int k1, int k2)
{
   /* base case */
   if ( NULL == root )
      return;

   /* Since the desired o/p is sorted, recurse for left subtree first
      If root->data is greater than k1, then only we can get o/p keys
      in left subtree */
   if ( k1 < root->data )
     Print(root->left, k1, k2);

   /* if root's data lies in range, then prints root's data */
   if ( k1 <= root->data && k2 >= root->data )
     printf("%d ", root->data );

  /* recursively call the right subtree */
   Print(root->right, k1, k2);
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
    int h,r;
    r=isBalanced(root,&h);
    if (r)
    {
        printf("\nTree is Balanced\n");
    }
    else
    {
        printf("\nTree is not Balanced\n");
    } 
    Print(root,n1,n2);
    return 0;
}
