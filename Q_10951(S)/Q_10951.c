// A+B-4 : 입력이 끝날 때까지 A+B를 출력하는 문제

#include <stdio.h>

int main(void)
{
	int A, B;

	while (scanf("%d %d", &A, &B) != EOF)
	{
		printf("%d\n", A + B);
	}

	return 0;
}