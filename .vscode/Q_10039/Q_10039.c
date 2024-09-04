// 평균 점수

#include <stdio.h>

int main(void) {
    int score[5];
    int count=0, sum=0;

    for(int i=0;i<5;i++)
    {
        scanf("%d", &score[i]);
        if(score[i]<40)
        {
            count++;
        }
        else sum+=score[i];
    }

    printf("%d\n", (sum+(count*40))/5);

    return 0;
}