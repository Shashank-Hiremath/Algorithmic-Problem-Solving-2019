// g++ queue.cpp -o queue;./queue
#include<stdio.h>
#include<stdlib.h>
#define QS 5
struct queue{
    int items[QS];
    int front;
    int rear;
};

typedef struct queue Q;

void ENQUEUE(Q *q, int x)
{
    if(q->rear==QS)
        printf("Queue is full\n");
    else
        q->items[++q->rear]=x;
}

void DEQUEUE(Q* q)
{
    if(q->rear<q->front)
        printf("Queue is empty\n");
    else
        printf("%d is dequeued\n", q->items[q->front++]);
}

void DISPLAY(Q *q)
{
    for(int i=q->front; i<q->rear; i++)
        printf("%d ", q->items[i]);
    printf("\n");
}

int main()
{
    int choice, x;
    Q q;
    q.front=0;
    q.rear=-1;
    while(1)
    {
        printf("Enter a choice:\n1) Enqueue\n2) Dequeue\n3)Display\n4)Exit\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                scanf("%d", &x);
                ENQUEUE(&q, x);
                break;
            case 2:
                DEQUEUE(&q);
                break;
            case 3:
                DISPLAY(&q);
                break;
            case 4:
                exit(0);
        }
    }
    return 0;
}