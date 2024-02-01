// 개수 세기 : 배열을 입력받고 v를 찾는 문제

#include <stdio.h>

int main(void)
{
	int N,v;
	int count = 0;
	int NUM[100];

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &NUM[i]);
	}

	scanf("%d", &v);

	for (int i = 0; i < N; i++)
	{
		if (NUM[i] == v)
		{
			count++;
		}
	}

	printf("%d", count);

	return 0;
}