// 블랙잭

#include <stdio.h>

int main()
{
    int N, M;
    int card[101];
    int blackjack = 0;
    int sum = 0;

    scanf("%d %d", &N, &M);

    for (int i=0; i<N; i++)
    {
        scanf("%d", &card[i]);
    }

    for (int i=0; i<N-2; i++)
    {
        for (int j=i+1; j<N-1; j++)
        {
            for (int k=j+1; k<N; k++)
            {
                sum = card[i] + card[j] + card[k];
                if(sum > blackjack && sum <= M)
                {
                    blackjack = sum;
                }
            }
        }
    }

    printf("%d\n", blackjack);

    return 0;
}