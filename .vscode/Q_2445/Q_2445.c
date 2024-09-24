// 별 찍기 - 8

#include <stdio.h>

int main(void) 
{
    int N;

    scanf("%d", &N);

    for(int i=1;i<=N;i++)
    {
       for(int j=i;j>0;j--) printf("*");
       for(int k=2*N-2*i;k>0;k--) printf(" ");
       for(int l=i;l>0;l--) printf("*");
       printf("\n");
    }

    for(int i=N-1;i>0;i--)
    {
       for(int j=i;j>0;j--) printf("*");
       for(int k=2*N-2*i;k>0;k--) printf(" ");
       for(int l=i;l>0;l--) printf("*");
       printf("\n");
    }

    return 0;
}