// 영수증

#include <stdio.h>

int main(void)
{
	int X, N, sum=0;

	scanf("%d %d", &X, &N);

	for (int i = 0; i < N; i++)
	{
		int a, b;

		scanf("%d %d", &a, &b);

		sum += a * b;
	}

	if (sum == X)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}

	return 0;
}