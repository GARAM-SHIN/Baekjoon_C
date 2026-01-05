// 숫자의 개수

#include <stdio.h>

int num[10];

int main(void)
{
    int A, B, C;
    int result=0;

    scanf("%d %d %d", &A, &B, &C);

    result = A * B * C;

    for(int i=result; i>0; i/=10)
    {
        num[i%10]++;
    }

    for (int i=0; i<10; i++)
    {
        printf("%d\n", num[i]);
    }

    return 0;
}

