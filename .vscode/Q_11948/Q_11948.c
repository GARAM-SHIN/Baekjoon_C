// 과목선택

#include <stdio.h>

int main(void) {
    int score[6];
    int max=0, sum=0;

    for(int i=0;i<6;i++)
    {
        scanf("%d", &score[i]);
    }

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3-i;j++)
        {
            if(score[j]<score[j+1])
            {
                max=score[j+1];
                score[j+1]=score[j];
                score[j]=max;
            }
        }
    }

    sum=score[0]+score[1]+score[2];

    if(score[4]>=score[5]) sum+=score[4];
    else sum+=score[5];

    printf("%d\n", sum);

    return 0;
}