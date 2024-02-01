// A+B-7 : A+B를 조금 더 아름답게 출력하는 문제

#include <stdio.h>

int main(void)
{
	int T;

	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		int A, B;

		scanf("%d %d", &A, &B);

		printf("Case #%d: %d\n", i+1, A + B);
	}

	return 0;
}