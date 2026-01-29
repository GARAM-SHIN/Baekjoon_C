// 손익분기점

#include <stdio.h>

int main()
{
    int A, B, C;
    int point = 0;

    scanf("%d %d %d", &A, &B, &C);

    if (B >= C)
    {
        point = -1;
    }

    else
    {
        point = (A / (C - B)) + 1;
    }

    printf("%d\n", point);

    return 0;
}