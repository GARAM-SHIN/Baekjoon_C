// 약수들의 합 : 약수를 구하면서 주어진 수가 완전수인지 판별하는 문제

#include <stdio.h>

int main(void)
{
    int num, sum, count, i, j;
    int factor[100001];

    while(1)
    {
        sum=0;
        count=0;

        scanf("%d", &num);

        if(num==-1)
        {
            return 0;
        }
        
        for(j=0,i=1;i<num;i++)
        {
            if(num%i==0)
            {
                factor[j++]=i;
                sum+=i;
                count++;
            }
        }
        
        if(sum==num)
        {
            printf("%d = %d", num, factor[0]);
            for(i=2;i<=count;i++)
            {
                printf(" + %d", factor[i-1]);
            }
            printf("\n");
        }
        else printf("%d is NOT perfect.\n", num);
    }

    return 0;
}