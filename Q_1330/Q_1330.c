// 두 수 비교하기 : 두 수를 비교한 결과를 출력하는 문제

#include <stdio.h>

int main(void)
{
	int A, B;

	scanf("%d %d", &A, &B);

	if (A > B)
	{
		printf(">");
	}
	else if (A < B)
	{
		printf("<");
	}
	else
	{
		printf("==");
	}

	return 0;
}