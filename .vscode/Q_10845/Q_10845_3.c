// 큐 : 원형 큐 구현

#include <stdio.h>
#include <string.h>

#define max_size 10001

typedef struct {
    int queue[max_size];
    int head;
    int rear;
} Queue;

void initQueue(Queue *q)    // 큐 초기화
{
    q -> head = 0;
    q -> rear = 0;
}

int empty(Queue *q)    // 큐가 비어있는지 확인
{
    return q -> head == q -> rear;
}

int full(Queue *q)    // 큐가 가득 찼는지 확인
{
    return (q -> rear + 1) % max_size == q -> head;
}

void push(Queue *q, int num)
{
    if (full(q))
        return;

    q -> rear = (q -> rear + 1) % max_size;
    q -> queue[q -> rear] = num;
}

int pop(Queue *q)
{
    if (empty(q))
        return -1;
    
    q -> head = (q -> head + 1) % max_size;
    return q -> queue[q -> head];
}

int size(Queue *q)
{
    return (q -> rear - q -> head + max_size) % max_size;
}

int front(Queue *q)
{
    if (empty(q))
        return -1;
    
    return q -> queue[(q -> head + 1) % max_size];
}

int back(Queue *q)
{
    if (empty(q))
        return -1;
    
    return q -> queue[q -> rear];
}

int main()
{
    Queue q;
    initQueue(&q);

    int N;
    char cmd[10];

    scanf("%d", &N);

    for (int i=0; i<N; i++)
    {
        scanf("%s", cmd);

        if (strcmp(cmd, "push") == 0)
        {
            int x;
            scanf("%d", &x);
            push(&q, x);
        }
        else if (strcmp(cmd, "pop") == 0)
        {
            printf("%d\n", pop(&q));
        }
        else if (strcmp(cmd, "size") == 0)
        {
            printf("%d\n", size(&q));
        }
        else if (strcmp(cmd, "empty") == 0)
        {
            printf("%d\n", empty(&q));
        }
        else if (strcmp(cmd, "front") == 0)
        {
            printf("%d\n", front(&q));
        }
        else if (strcmp(cmd, "back") == 0)
        {
            printf("%d\n", back(&q));
        }
    }

    return 0;
}