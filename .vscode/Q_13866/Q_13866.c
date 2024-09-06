// 팀 나누기

#include <stdio.h>

int main(void) {
    int level[4];
    int max=0, sub=0;

    for(int i=0;i<4;i++)
    {
        scanf("%d", &level[i]);
    }

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3-i;j++)
        {
            if(level[j]>level[j+1])
            {
                max=level[j];
                level[j]=level[j+1];
                level[j+1]=max;
            }
        }
    }

    sub=(level[0]+level[3])-(level[1]+level[2]);
    if(sub<0) sub=sub*(-1);

    printf("%d\n", sub);

    return 0;
}