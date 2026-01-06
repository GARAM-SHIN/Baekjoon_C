// 피보나치 수 5

#include <stdio.h>

int pibonacci(int N)
{
    if (N<2)
        return N;
    else   
        return pibonacci(N-1) + pibonacci(N-2);
}

int main(void)
{
    int N;
    int result = 0;

    scanf("%d", &N);

    result = pibonacci(N);

    printf("%d\n",result);

    return 0;
}