// 진법 변환 2 : 반대 방향으로 진법을 변환하는 문제

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int B, remainder;
    long long N;

    scanf("%lld %d", &N, &B);

    if(N==0)
    {
        printf("0\n");
    }
    else
    {
        char result[100001];
        int i=0;

        while(N>0)
        {
            remainder = N%B;

            if(remainder>=10)
            {
                result[i]=remainder+'A'-10;
            }   
            else result[i]=remainder+'0';

            N/=B;
            i++;
        }
        for(int j=i-1;j>=0;j--)
        {
            printf("%c", result[j]);
        }
        printf("\n");
    }

    return 0;
}