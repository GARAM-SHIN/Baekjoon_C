// 곱셈 : 빈 칸에 들어갈 수는?

#include <stdio.h>

int main(void)
{
	int A=0, B=0;

	scanf("%d %d", &A, &B);

	printf("%d\n%d\n%d\n%d", A*(B%10),A*(B%100/10),A*(B/100), A * B);

	return 0;
}