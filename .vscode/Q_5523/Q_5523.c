// 경기 결과

#include <stdio.h>

int main(void)
{
    int N;
    int A, B;
    int count_A=0, count_B=0;

    scanf("%d", &N);

    for(int i=0;i<N;i++)
    {
        scanf("%d %d", &A, &B);

        if(A>B) count_A++;
        else if(A<B) count_B++;
    }

    printf("%d %d\n", count_A, count_B);

    return 0;
}