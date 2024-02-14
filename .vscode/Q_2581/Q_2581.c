// 소수 : 2부터 X-1까지 모두 나눠서 X가 소수인지 판별하는 문제 2 _ F

#include <stdio.h>

int main(void)
{
    int M, N, count, sum=0, min=9999;

    scanf("%d %d", &M, &N);

    if(M==1)
    {
        M++;
    }

    for(int i=M;i<=N;i++)
    {
        count=1;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                count=0;
                break;
            }
        }

        if(count==1)
        {
            if(min>i)
            {
                min=i;
            }
            sum+=i;
        }
    }

    if(sum==0)
    {
        printf("-1\n");
    }
    else printf("%d\n%d\n", sum, min);

    return 0;
}