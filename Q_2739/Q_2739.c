// 구구단 : 구구단을 출력하는 문제

#include <stdio.h>

int main(void)
{
	int N;

	scanf("%d", &N);

	for (int i = 1; i < 10; i++)
	{
		printf("%d * %d = %d\n", N, i, N * i);
	}

	return 0;
}