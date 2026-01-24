// ATM

#include <stdio.h>

int main()
{
    int N;
    int P[1001];
    int temp = 0;
    int mintime = 0;

    scanf("%d", &N);

    for (int i=0; i<N; i++)
    {
        scanf("%d", &P[i]);
    }

    for (int i=0; i<N; i++)
    {
        for (int j=0; j<N; j++)
        {
            if(P[i] < P[j])
            {
                temp = P[i];
                P[i] = P[j];
                P[j] = temp;
            }
        }
    }

    for (int i=0; i<N; i++)
    {
        mintime += P[i] * (N-i);
    }

    printf("%d\n", mintime);

    return 0;
}