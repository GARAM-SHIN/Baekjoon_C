// 점수 계산

#include <stdio.h>

int main(void)
{
    int N;
    int result = 0;
    int score = 0, count = 0;

    scanf("%d", &N);

    for (int i=0; i<N; i++)
    {
        scanf("%d", &result);

        if (result == 1)
        {
            count++;
            score += count;
        }
        else 
            count = 0;
    }

    printf("%d\n", score);

    return 0;
}