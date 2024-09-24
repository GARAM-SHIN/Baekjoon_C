// 별 찍기 - 12

#include <stdio.h>

int main(void) 
{
    int N;

    scanf("%d", &N);

    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=N-i;j++) printf(" ");
        for(int k=1;k<=i;k++) printf("*");
        printf("\n");
    }

    for(int i=N-1;i>0;i--)
    {
        for(int j=1;j<=N-i;j++) printf(" ");
        for(int k=1;k<=i;k++) printf("*");
        printf("\n");
    }

    return 0;
}