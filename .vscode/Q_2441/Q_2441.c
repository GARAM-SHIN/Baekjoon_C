// 별 찍기 - 4

#include <stdio.h>

int main(void)
{
    int N;

    scanf("%d", &N);

    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=i-1;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=N-i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}