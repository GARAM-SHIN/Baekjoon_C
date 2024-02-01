// 나머지 : 배열을 활용하여 서로 다른 값의 개수를 찾는 문제

#include <stdio.h>

int main(void)
{
	int NUM;
	int R[10] = { 0, };
	int count = 0, result=0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &NUM);
		R[i] = NUM % 42;
	}

	for (int i = 0; i < 10; i++) {
		int count = 0; 
		for (int j = i + 1; j < 10; j++) 
		{
			if (R[i] == R[j]) 
			{ 
				count++; 
			}
		}
		if (count == 0) 
		{ 
			result++; 
		}
	}

	printf("%d", result);
}