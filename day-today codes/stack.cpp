// g++ stack.cpp -o stack;./stack
#include <stdio.h>
#include <stdlib.h>
#define SS 5

struct stack
{
    int items[SS];
    int top;
};

typedef struct stack S;

void PUSH(S *s, int x)
{
    if (s->top == SS)
        printf("Stack full\n");
    else
        s->items[s->top++] = x;
}

void POP(S *s)
{
    if (s->top == 0)
        printf("Stack empty\n");
    else
        printf("%d is popped\n", s->items[--s->top]);
}
void PEEK(S *s)
{
    if (s->top == 0)
        printf("Stack empty\n");
    else
        printf("%d is popped\n", s->items[--s->top]);
}

void Print(S *s)
{
    for(int i=0;i<s->top;i++)
        printf("%d ",s->items[i]);
    printf("\n");
}

int main()
{
    S s;
    int choice, x;
    s.top=0;
    while (1)
    {
        printf("---------------------\nEnter a choice:\n1) Push\n2) Pop\n3) Peek\n4) Print\n5)Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter number to be pushed");
            scanf("%d", &x);
            printf("%d--\n",x);
            PUSH(&s, x);
            break;
        case 2:
            POP(&s);
            break;
        case 3:
            PEEK(&s);
            break;
        case 4:
            Print(&s);
            break;
        case 5:
            exit(0);
        }
    }
}
