// 초콜릿 자르기

#include <stdio.h>

int main()
{
    int N, M;
    int choco;

    scanf("%d %d", &N, &M);

    choco = (N * M) - 1;

    printf("%d\n", choco);

    return 0;
}