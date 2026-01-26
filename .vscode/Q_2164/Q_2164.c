// 카드 2

#include <stdio.h>

#define max_size 500000

int main()
{
    int N;
    int card[max_size];
    int front = 0;
    int rear, i;

    scanf("%d", &N);

    for (i=0; i<N; i++)
    {
        card[i] = i + 1;
    }

    rear = N - 1;

    while(1)
    {
        front = (front + 1) % N;

        if(rear == front) break;

        rear = (rear + 1) % N;
        card[rear] = card[front];
        front = (front + 1) % N;

        if (rear == front) break;
    }

    printf("%d", card[rear]);

    return 0;
}