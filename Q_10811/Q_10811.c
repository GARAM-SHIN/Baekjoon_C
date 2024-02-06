// 바구니 뒤집기 : 배열을 뒤지는 문제

#include <stdio.h>

int main(void)
{
	int NUM[101] = { 0, };
	int N, M, a, b;
	int temp;

	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++)
	{
		NUM[i] = i + 1;
	}

	for (int j = 0; j < M; j++)
	{
		scanf("%d %d", &a, &b);
		
		for (int k = a - 1; k < b; k++)
		{
			temp = NUM[k];
			NUM[k] = NUM[b - 1];
			NUM[b - 1] = temp;
			b--;
		}
	}

	for (int z = 0; z < N; z++)
	{
		printf("%d ", NUM[z]);
	}

	return 0;
}