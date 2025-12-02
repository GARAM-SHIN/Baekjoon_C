// 다각형의 대각선

#include <stdio.h>

int main(void)
{
    int N;
    int point = 0;

    scanf("%d", &N);

    point = (N *(N-1) * (N-2) * (N-3)) / 24;

    printf("%d\n", point);

    return 0;
}
