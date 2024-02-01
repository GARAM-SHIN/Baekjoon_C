// 코딩은 체육과목입니다 : 코딩 공부를 잘 하여 이렇게 long long long ...을 칠판에 적는 일이 없도록 합시다

#include <stdio.h>

int main(void)
{
	int N,d;

	scanf("%d", &N);

	if (N % 4 == 0)
	{
		d = N / 4;
	}

	for (int i = 0; i < d; i++)
	{
		printf("long ");
	}

	printf("int");

	return 0;
}