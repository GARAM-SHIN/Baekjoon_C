// 과제 안 내신 분..? : 과제 제출 기한이 지났습니다 

#include <stdio.h>

int main(void)
{
	int n[31] = { 0, };
	int student;

	for (int i = 0; i < 28; i++)
	{
		scanf("%d", &student);
		n[student] = 1;
	}

	for (int i = 1; i < 31; i++)
	{
		if (!n[i])
		{
			printf("%d\n", i);
		}
	}

	return 0;
}