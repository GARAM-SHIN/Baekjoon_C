// 공 넣기 : 배열에 값을 쓰는 문제

#include <stdio.h>

int main(void)
{
	int N, M;
	int arr[101] = { 0, };
	int a, b, c;

	scanf("%d %d", &N, &M);

	for (int i = 0; i < M; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		for (int j = a; j <= b; j++)
		{
			arr[j] = c;
		}
	}

	for (int i = 1; i <= N; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}