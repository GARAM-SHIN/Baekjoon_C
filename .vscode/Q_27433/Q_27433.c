// 팩토리얼 2

#include <stdio.h>

int main()
{
    int N;
    long long factorial[20];

    scanf("%d", &N);

    factorial[0] = 1;

    for (int i=1; i<=N; i++)
    {
        factorial[i] = i * factorial[i-1];
    }

    printf("%lld\n", factorial[N]);

    return 0;
}