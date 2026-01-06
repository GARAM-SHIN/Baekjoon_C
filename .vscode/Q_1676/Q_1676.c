// 팩토리얼 0의 개수

#include <stdio.h>

int main(void)
{
    int N;
    int mul5 = 0;
    int mul25 = 0;
    int mul125 = 0;

    scanf("%d", &N);

    mul5 = N / 5;
    mul25 = N / 25;
    mul125 = N / 125;

    printf("%d\n", mul5 + mul25 + mul125);

    return 0;
}