// 공 바꾸기 : 배열의 값을 교환하는 문제

#include <stdio.h>

void swap(int index1, int index2);

int N, M;
int arr[101];
int a, b;

int main(void)
{
	scanf("%d %d", &N, &M);

	for (int i = 1; i <= N; i++)
	{
		arr[i] = i;
	}

	for (int i = 0; i < M; i++)
	{
		scanf("%d %d", &a, &b);
		swap(a, b);
	}

	for (int i = 1; i <= N; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}

void swap(int index1, int index2)
{
	int temp = arr[index1];
	arr[index1] = arr[index2];
	arr[index2] = temp;
}