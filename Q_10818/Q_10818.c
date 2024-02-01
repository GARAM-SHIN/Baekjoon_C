// 최소, 최대 : 최솟값과 최댓값을 찾는 문제

#include <stdio.h>

int main(void)
{
	int N;
	int min = 1000000, max = -1000000;
	int NUM[1000001];

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &NUM[i]);
	}

	for (int i = 0; i < N; i++)
	{
		if (NUM[i] > max)
		{
			max = NUM[i];
		}
	}

	for (int i = 0; i < N; i++)
	{
		if (NUM[i] < min)
		{
			min = NUM[i];
		}
	}

	printf("%d %d", min, max);

	return 0;
}