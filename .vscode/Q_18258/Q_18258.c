// 큐 2

#include <stdio.h>
#include <string.h>

#define max_size 2000001

int queue[max_size];
int head = -1;
int rear = -1;
int qsize = 0;

void push(int num)
{
    queue[++rear] = num;
    qsize++;
}

int pop()
{
    if (!qsize)
        return -1;
    else
    {
        qsize--;
        return queue[++head];
    }
}

int size()
{
    return qsize;
}

int empty()
{
    if (!qsize)    // if(qsize) return 0;
        return 1;
    else
        return 0;
}

int front()
{
    if(!qsize)
        return -1;
    else
        return queue[head + 1];
}

int back()
{
    if(!qsize)
        return -1;
    else
        return queue[rear];
}

int main()
{
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
            push(num);
        }
        else if (strcmp(cmd, "pop") == 0)
        {
            printf("%d\n", pop());
        }
        else if (strcmp(cmd, "size") == 0)
        {
            printf("%d\n", size());
        }
        else if (strcmp(cmd, "empty") == 0)
        {
            printf("%d\n", empty());
        }
        else if (strcmp(cmd, "front") == 0)
        {
            printf("%d\n", front());
        }
        else if (strcmp(cmd, "back") == 0)
        {
            printf("%d\n", back());
        }
    }

    return 0;
}