// 합 : 1부터 N까지의 합을 구하는 문제

#include <stdio.h>

int main(void)
{
	int n, sum=0;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}

	printf("%d", sum);

	return 0;
}