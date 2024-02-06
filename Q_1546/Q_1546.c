// 평균 : 평균을 조작하는 문제

#include <stdio.h>

int main(void)
{
	int N;
	float mean = 0;
	int max = -999;
	int score[1001] = { 0, };

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &score[i]);
	}

	for (int i = 0; i < N; i++)
	{
		if (score[i] >= max)
		{
			max = score[i];
		}
	}

	for (int i = 0; i < N; i++)
	{
		mean += (float)score[i] / max * 100;
	}

	printf("%f\n", mean/N);

	return 0;
}