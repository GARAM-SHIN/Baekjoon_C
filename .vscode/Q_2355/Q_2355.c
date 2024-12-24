// 시그마

#include <stdio.h>

int main(void)
{
    long long A, B;
    long long swap;

    scanf("%lld %lld", &A, &B);

    if(A>B)
    {
        swap=A;
        A=B;
        B=swap;
    }

    printf("%lld\n", ((B-A+1)*(B+A))/2);

    return 0;
}