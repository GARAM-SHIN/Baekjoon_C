// 큐

#include <stdio.h>
#include <string.h>

#define max_size 10001

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
    if (qsize)
        return 0;
    else 
        return 1;
}

int front()
{
    if (!qsize)
        return -1;
    else
        return queue[head + 1];
}

int back()
{
    if (!qsize)
        return -1;
    else
        return queue[rear];
}

int main()
{
    int N;
    char str[6];
    int num, i;

    scanf("%d", &N);

    for (i = 0; i<N; i++)
    {
        scanf("%s", str);

        if(strcmp(str, "push") == 0)
        {
            scanf("%d", &num);
            push(num);
        }
        else if(strcmp(str, "pop") == 0)
        {
            printf("%d\n", pop());
        }
        else if(strcmp(str, "size") == 0)
        {
            printf("%d\n", size());
        }
        else if(strcmp(str, "empty") == 0)
        {
            printf("%d\n", empty());
        }
        else if(strcmp(str, "front") == 0)
        {
            printf("%d\n", front());
        }
        else if(strcmp(str, "back") == 0)
        {
            printf("%d\n", back());
        }
    }

    return 0;
}