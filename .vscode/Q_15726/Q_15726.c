// 이칙연산

#include <stdio.h>

int main(void) {
    long long A, B, C;
    long long op1=0, op2=0;

    scanf("%lld %lld %lld", &A, &B, &C);

    op1=(double)(A*B)/C;
    op2=((double)A/B)*C;

    printf("%lld\n", (op1>op2)?op1:op2);

    return 0;
}