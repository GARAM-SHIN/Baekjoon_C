// 팩토리얼

#include <stdio.h>

int factorial(int N)
{
    if (N==1 || N==0)
        return 1;
    else 
        return N * factorial(N-1);
}

int main()
{
    int N;
    int result = 0;

    scanf("%d", &N);

    result = factorial(N);

    printf("%d\n", result);

    return 0;
}