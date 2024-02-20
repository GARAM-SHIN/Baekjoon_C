// 중앙 이동 알고리즘 : 둘씩 반복해서 나눴을 떄 점의 개수를 세는 문제

#include <stdio.h>

int main(void)
{
    int N;
    int dot=3, rep=2;

    scanf("%d", &N);

    for(int i=1;i<N;i++)
    {
        dot+=rep;
        rep*=2;
    }

    printf("%d", dot*dot);

    return 0;
}