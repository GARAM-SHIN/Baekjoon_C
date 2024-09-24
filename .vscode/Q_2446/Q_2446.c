// 별 찍기 - 9

#include <stdio.h>

int main(void) 
{
    int N;

    scanf("%d", &N);

    for(int i=N;i>0;i--)
    {
        for (int j = N-i; j > 0; j--)printf(" ");
		for (int k = 2*i-1; k > 0; k--)printf("*");
		printf("\n");
    }

    for(int i=2;i<=N;i++)
    {
        for (int j = N-i; j > 0; j--)printf(" ");
		for (int k = 2*i-1; k > 0; k--)printf("*");
		printf("\n");
    }
}