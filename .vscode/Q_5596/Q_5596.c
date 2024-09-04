// 시험 점수

#include <stdio.h>

int main(void) {
    int S=0, T=0;
    int score[4], tcore[4];

    for(int i=0;i<4;i++)
    {
        scanf("%d", &score[i]);
        S+=score[i];
    }

    for(int j=0;j<4;j++)
    {
        scanf("%d", &tcore[j]);
        T+=tcore[j];
    }

    if(S>=T) printf("%d\n", S);
    else printf("%d\n", T);

    return 0;
}