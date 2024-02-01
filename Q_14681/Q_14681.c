// 사분면 고르기 : 점이 어느 사분면에 있는지 알아내는 문제

#include <stdio.h>

int main(void)
{
	int x, y;

	scanf("%d %d", &x, &y);

	if (x > 0)
	{
		if (y > 0)
		{
			printf("1");
		}
		else
		{
			printf("4");
		}
	}
	else
	{
		if (y > 0)
		{
			printf("2");
		}
		else
		{
			printf("3");
		}
	}

	return 0;
}