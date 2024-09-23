// 별 찍기 - 6

#include <stdio.h>

int main(void)
{
    int N;

    scanf("%d", &N);

    for(int i=N;i>=1;i--)
    {
        for(int j=N-i;j>0;j--) printf(" ");
        for(int k=2*i-1;k>0;k--) printf("*");
        printf("\n");
    }

    return 0;
}