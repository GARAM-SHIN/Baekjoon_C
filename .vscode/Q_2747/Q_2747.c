// 피보나치 수

#include <stdio.h>

int main(void)
{
    int N;
    int pibonacci[46] = {0, 1};

    scanf("%d", &N);

    for (int i=2; i<=N; i++)
    {
        pibonacci[i] = pibonacci[i-1] + pibonacci[i-2];
    }

    printf("%d\n", pibonacci[N]);

    return 0;
}