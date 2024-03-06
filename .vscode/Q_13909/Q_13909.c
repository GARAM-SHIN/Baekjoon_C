// 창문 닫기 : 배수와 약수에 대한 재미있는 문제 _ F

#include <stdio.h>

int main(void)
{
    int N;
    int open=1;

    scanf("%d", &N);

    for(int i=2;i*i<N+1;i++)
    {
        open+=1;
    }

    printf("%d", open);

    return 0;
}