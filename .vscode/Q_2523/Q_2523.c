// 별 찍기 - 13

#include <stdio.h>

int main(void) 
{
    int N;

    scanf("%d", &N);

    for(int i=1;i<=N;i++)
    {
        for(int k=1;k<=i;k++) printf("*");
        printf("\n");
    }

    for(int i=N-1;i>0;i--)
    {
        for(int k=1;k<=i;k++) printf("*");
        printf("\n");
    }

    return 0;
}