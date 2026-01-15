// 피보나치 수 2

#include <stdio.h>

long long fibo(int num)
{
    int i;
    long long fibo[100];

    fibo[0] = 0;
    fibo[1] = 1;

    for (i = 2; i<=num; i++)
    {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }

    return fibo[num];
}

int main()
{
    int N;

    scanf("%d", &N);

    printf("%lld\n", fibo(N));

    return 0;
}