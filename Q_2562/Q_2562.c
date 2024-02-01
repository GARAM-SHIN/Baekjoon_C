// 최댓값 : 최댓값이 어디에 있는지 찾는 문제

#include <stdio.h>

int main(void)
{
	int NUM[9];
	int max = -9999, index=0;

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &NUM[i]);
	}

	for (int i = 0; i < 9; i++)
	{
		if (NUM[i] > max)
		{
			max = NUM[i];
			index = i + 1;
		}
	}

	printf("%d\n%d", max, index);

	return 0;
}