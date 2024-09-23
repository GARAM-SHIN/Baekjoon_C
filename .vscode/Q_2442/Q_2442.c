// 별 찍기 - 5

#include <stdio.h>

int main(void) 
{
    int N;

    scanf("%d", &N);

    for(int i=1;i<=N;i++)
    {
        for(int j=N-i;j>0;j--) printf(" ");
        for(int k=2*i-1;k>0;k--) printf("*");
        printf("\n");
    }

    return 0;
}