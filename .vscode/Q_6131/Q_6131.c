// 완전 제곱수

#include <stdio.h>

int main(void)
{
    int N;
    int count = 0;

    scanf("%d", &N);

    for (int a=1; a<=500; a++)
    {
        for (int b=1; b<=500; b++)
        {
            if ((a*a) - (b*b) == N)
                count++;
        }
    }

    printf("%d\n", count);

    return 0;
}