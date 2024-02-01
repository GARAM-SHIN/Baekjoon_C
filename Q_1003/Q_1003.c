#include <stdio.h>

int fibonacci(int n);

int main(void)
{
	int T, N;
	
	scanf_s("%d", &T);
	
	for (int i = 0; i < T; i++)
	{
		scanf_s("%d", &N);
		fibonacci(N);
	}
}

int fibonacci(int n)
{
	int count_0 = 0, count_1 = 0;
	
	if (n == 0)
	{
		count_0++;
		return count_0;
	}
	
	else if (n == 1)
	{
		count_1++;;
		return count_1;
	}

	else
	{
		return fibonacci(n - 1) + fibonacci(n - 2);
	}

	printf("%d %d", count_0, count_1);

	return 0;
}