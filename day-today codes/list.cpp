// g++ list.cpp -o list;./list
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;

NODE *insert_start(NODE *start, int x)
{
    NODE *newnode;
    newnode = (NODE *)malloc(sizeof(NODE));
    if (newnode == NULL)
    {
        printf("Memory full\n");
        return start;
    }
    newnode->data = x;
    newnode->next = start;
    return newnode;
}

NODE *insert_end(NODE *start, int x)
{
    NODE *newnode, *temp;
    temp = start;
    newnode = (NODE *)malloc(sizeof(NODE));
    if (newnode == NULL)
    {
        printf("Memory full\n");
        return start;
    }
    newnode->data = x;
    newnode->next = NULL;
    while (temp->next)
        temp = temp->next;
    temp->next = newnode;
    return start;
}

NODE *delete_end(NODE *start)
{
    if (start == NULL)
    {
        printf("List empty\n");
        return start;
    }
    if (start->next == NULL)
    {
        free(start);
        return NULL;
    }
    NODE *curr = start, *prev = NULL;
    while (curr->next)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = NULL;
    free(curr);
    return start;
}

NODE *delete_start(NODE *start)
{
    if (start == NULL)
    {
        printf("List empty\n");
        return start;
    }
    if (start->next == NULL)
    {
        free(start);
        return NULL;
    }
    NODE *newstart = start->next;
    free(start);
    return newstart;
}

void display(NODE *start)
{
    while (start)
    {
        printf("%d ", start->data);
        start = start->next;
    }
    printf("\n");
}

int main()
{
    int choice, x;
    NODE *start;
    start = NULL;
    while (1)
    {
        printf("Enter a choice:\n1) insert_start\n2) insert_end\n3)delete_start\n4)delete_end\n5)display\n6)Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            scanf("%d", &x);
            start = insert_start(start, x);
            break;
        case 2:
            scanf("%d", &x);
            start = insert_end(start, x);
            break;
        case 3:
            start = delete_start(start);
            break;
        case 4:
            start = delete_start(start);
            break;
        case 5:
            display(start);
            break;
        case 6:
            exit(0);
        }
    }
}
