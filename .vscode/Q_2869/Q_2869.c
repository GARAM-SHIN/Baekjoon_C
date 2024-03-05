// 달팽이는 올라가고 싶다 : 달팽이의 움직임을 계산하는 문제

#include <stdio.h>

int main(void)
{
    int A, B, V;
    int day=0;
    scanf("%d %d %d", &A, &B, &V);

    day=(V-B-1)/(A-B)+1;

    printf("%d\n", day);

    return 0;
}