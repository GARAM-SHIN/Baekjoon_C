// 평균은 넘겠지

#include <stdio.h>

int main(void)
{
    int C, N, score[1001];
    int count;
    double avg;

    scanf("%d", &C);

    for(int i=0;i<C;i++)
    {
        scanf("%d", &N);
        avg=0.0;

        for(int j=0;j<N;j++)
        {
            scanf("%d", &score[j]);
            avg+=score[j];
        }

        avg/=N;
        count=0;

        for(int j=0;j<N;j++)
        {
            if(score[j]>avg)
            {
                count++;
            }
        }

        printf("%.3lf%%\n", 100.0*count/N);
    }

    return 0;
}