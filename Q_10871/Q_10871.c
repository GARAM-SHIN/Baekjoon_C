// X보다 작은 수 : 배열을 입력받고 X보다 작은 수를 찾는 문제

#include <stdio.h>

int main(void)
{
	int N, X;
	int A[10001];

	scanf("%d %d", &N, &X);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &A[i]);
	}

	for (int i = 0; i < N; i++)
	{
		if (A[i] < X)
		{
			printf("%d ", A[i]);
		}
	}

	return 0;
}