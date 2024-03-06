// 커트라인 : k번쨰로 큰 수를 구하는 문제

#include <stdio.h>

int main(void)
{
    int N, k, tmp;
    int score[10001];

    scanf("%d %d", &N, &k);

    for(int i=0;i<N;i++)
    {
        scanf("%d", &score[i]);
    }

    for(int i=0;i<N; i++)
    {
        for(int j=i+1;j<N;j++)
        {
            if(score[i]<score[j])
            {
                tmp=score[i];
                score[i]=score[j];
                score[j]=tmp;
            }
        }
        if(i==k-1) break;
    }

    printf("%d\n", score[k-1]);

    return 0;
}