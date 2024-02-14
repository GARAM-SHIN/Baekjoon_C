// 약수 구하기 : 주어진 수의 약수를 구하는 문제

#include <stdio.h>
#include <string.h>

int main(void)
{
    int N, K;
    int count =0;

    scanf("%d %d", &N, &K);

    for(int i=1;i<=N;i++)
    {
        if(N%i==0)
        {
            count++;
            if(count==K)
            {
                printf("%d", i);
                break;
            }
        }
    }

    if(count!=K)
    {
        printf("0");
    }

    return 0;
}