// g++ bst.cpp -o bst;./bst
#include <stdio.h>
#include <stdlib.h>

struct bst
{
    int data;
    struct bst *left;
    struct bst *right;
};
typedef struct bst BST;

BST *insert_bst(BST *root)
{
    BST *newnode;
    newnode = (BST *)malloc(sizeof(BST));
    if (newnode == NULL)
    {
        printf("Mem failed\n");
        return root;
    }
    printf("Enter Tree Data\n");
    scanf("%d", &newnode->data);
    newnode->left = NULL;
    newnode->right = NULL;

    if(root == NULL)
        return newnode;
    BST * prev = NULL, *curr = root;
    while(curr)
    {
        prev = curr;
        if(curr->data > newnode->data)
            curr = curr->left;
        else
            curr = curr->right;
    }
    if(prev->data > newnode->data)
        prev->left = newnode;
    else
        prev->right = newnode;
    return root;
}

void inorder(BST *root)
{
    if(root)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

BST* delete_bst(BST *root)
{
    if(root == NULL)
        {
            printf("Empty tree\n");
            return root;
        }
    int data;
    printf("Enter delete item\n");
    scanf("%d", &data);

    BST* parent = NULL, *curr = root, *successor, *p;
    while(curr != NULL && curr->data != data)
    {
        parent = curr;
        if(curr->data > data)
            curr = curr->left;
        else
            curr = curr->right;
    }
    if(curr == NULL)
        {
            printf("Item not found\n");
            return root;
        }
    if(curr->left == NULL)
        p = curr->right;
    else if(curr->right == NULL)    
        p = curr->left;
    else{
        successor = curr->right;
        while(successor->left)
            successor = successor->left;
        successor->left = curr->left;
        p = curr->right;
    }

    if(parent == NULL)
        {
            free(curr);
            return p;
        }

    if(p == curr->left)
        parent->left = p;
    else
        parent->right = p;
}


int main()
{
    BST *root = NULL;
    root = insert_bst(root);
    root = insert_bst(root);
    root = insert_bst(root);
    root = insert_bst(root);
    inorder(root);    

    root = delete_bst(root);
    inorder(root);
}