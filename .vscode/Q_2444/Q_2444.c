// 별 찍기 - 7 : 별을 찍는 문제 _ F

#include <stdio.h>

int main(void)
{
    int N;

    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
		for (int j = N-i; j > 0; j--)printf(" ");
		for (int k=2*i-1; k > 0; k--)printf("*");
		printf("\n");
	}
	for (int i = N-1; i > 0; i--) {
		for (int j = N-i; j > 0; j--)printf(" ");
		for (int k = 2*i-1; k > 0; k--)printf("*");
		printf("\n");
	}
    return 0;
}