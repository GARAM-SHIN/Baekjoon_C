// 대표값2 : 5개의 수와 평균과 중앙값을 구하는 문제

#include <stdio.h>

int main(void)
{
    int num[5];
    int tmp, sum=0, cen=0;

    for(int i=0;i<5;i++)
    {
        scanf("%d", &num[i]);
        sum+=num[i];
    }

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(num[j+1]<num[j])
            {
                tmp=num[j+1];
                num[j+1]=num[j];
                num[j]=tmp;
            }
        }
    }

    printf("%d\n%d\n", sum/5, num[2]);

    return 0;
}