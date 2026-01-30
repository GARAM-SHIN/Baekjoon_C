// 프린터 큐

#include <stdio.h>
#include <string.h>

#define max_size 101

int main()
{
    int test;
    int N, M;
    int priority[max_size];

    scanf("%d", &test);

    for(int i=0; i<test; i++)
    {
        scanf("%d %d", &N, &M);

        int ans = 1;
        int front = 0;
        int max = 0;

        for(int j=0; j<N; j++)
        {
            scanf("%d", &priority[j]);
        }

        while(1)
        {
            for (int k=0; k<N; k++)
            {
                if (priority[k] > max)
                    max = priority[k];
            }

            while(priority[front] != max)
            {
                front = (front + 1) % N;
            }

            if (front == M)
                break;

            priority[front] = 0;
            front = (front + 1) % N;
            max = 0;
            ans++;
        }

        printf("%d\n", ans);
    }

    return 0;
}