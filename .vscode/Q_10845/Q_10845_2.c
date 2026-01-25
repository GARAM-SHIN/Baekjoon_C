// 큐 : 구조체 구현

#include <stdio.h>
#include <string.h>

#define max_size 10001

typedef struct {    // 구조체 선언
    int queue[max_size];
    int head;
    int rear;
} Queue;

void initQueue(Queue *q)    // 큐 초기화 함수
{
    q -> head = 0;    // front와 rear를 같은 위치로 맞추면 "빈 큐" 상태가 됨
    q -> rear = 0;
}

void push(Queue *q, int num)    // 큐의 맨 뒤(rear의 위치)에 데이터를 넣고 rear를 한 칸 증가시킴
{
    q -> queue[q->rear] = num;
    q -> rear++;
}

int pop(Queue *q)    
{
    if (q -> head == q -> rear)    // 큐가 비어 있으면 -1 반환
        return -1;
    
    return q -> queue[q -> head++];    // front의 위치의 값을 반환하고 front를 한 칸 증가시킴
}

int size(Queue *q)
{
    return q -> rear - q -> head;    // 큐에 들어 있는 원소의 개수 = rear - front
}

int empty(Queue *q)
{
    return (q -> head == q -> rear);    // front와 rear가 같으면 큐가 비어 있음 -> 1 / 아니면 비어있지 않음 -> 0
}

int front(Queue *q)
{
    if (q -> head == q -> rear)    // 큐가 비어 있으면 -1
        return -1;
    
    return q -> queue[q -> head];    // front 위치의 값을 반환
}

int back(Queue *q)
{
    if (q -> head == q -> rear)    // 큐가 비어 있으면 -1
        return -1;

    return q -> queue[q -> rear - 1];    // rear 바로 앞 위치의 값을 반환  
}

int main()
{
    Queue q;
    initQueue(&q);    // 큐 초기화

    int N;
    char cmd[10];

    scanf("%d", &N);

    for (int i=0; i<N; i++)
    {
        scanf("%s", cmd);

        if (strcmp(cmd, "push") == 0)
        {
            int num;
            scanf("%d", &num);
            push(&q, num);
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
