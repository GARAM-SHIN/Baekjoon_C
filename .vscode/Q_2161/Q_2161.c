// 카드 1

#include <stdio.h>

#define max_size 1024
#define divide 1023

int main()
{
    int card[max_size];
    int front = 0, rear;
    int N, i;

    scanf("%d", &N);

    for (i=0; i<N; i++)
    {
        card[i] = i + 1;
    }

    rear = N;

    while(1)
    {
        printf("%d ", card[front]);
        front = (front + 1) % divide;

        if (front == rear) break;

        card[rear] = card[front];
        rear = (rear + 1) % divide;
        front = (front + 1) % divide;
    }

    printf("\n");
    
    return 0;
}