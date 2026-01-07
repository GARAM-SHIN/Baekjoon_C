// 이항 계수 1

#include <stdio.h>

int factorial(int N)
{
    if (N==0 || N==1)
        return 1;
    else  
        return N*factorial(N-1);
}

int main(void)
{
    int N, K;
    int result = 0;

    scanf("%d %d", &N, &K);

    result =  factorial(N) /(factorial(N-K)*factorial(K));

    printf("%d\n", result);

    return 0;
}