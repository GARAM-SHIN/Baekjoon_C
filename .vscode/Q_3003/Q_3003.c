// 킹, 퀸, 룩, 비숍, 나이트, 폰 : 체스판 문제

#include <stdio.h>

int main(void)
{
    int K, Q, L, B, N, P;

    scanf("%d %d %d %d %d %d", &K, &Q, &L, &B, &N, &P);

    printf("%d %d %d %d %d %d\n", 1-K, 1-Q, 2-L, 2-B, 2-N, 8-P);

    return 0;
}