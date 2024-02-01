// 빠른 A+B : 빠르게 입력받고 출력하는 문제

#include <stdio.h>

int main(void)
{
	int T;

	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		int A, B;

		scanf("%d %d", &A, &B);

		printf("%d\n", A + B);
	}

	return 0;
}