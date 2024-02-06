// 오븐 시계 : 범위가 더 넓은 시간 계산 문제

#include <stdio.h>

int main(void)
{
	int H, M, C;

	scanf("%d %d %d", &H, &M, &C);

	H += C / 60;
	M += C % 60;

	if (M >= 60)
	{
		H += 1;
		M -= 60;
	}

	if (H >= 24)
	{
		H -= 24;
	}

	printf("%d %d", H, M);

	return 0;
}