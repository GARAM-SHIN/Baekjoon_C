// 소수 찾기 : 2부터 X-1까지 모두 나눠서 X가 소수인지 판별하는 문제 1

#include <stdio.h>

int main(void)
{
    int N, num, i, count=0;

    scanf("%d", &N);

    while(N--)
    {
        scanf("%d", &num);
        for(i=2;i<num;i++)
        {
            if(num%i==0)
            {
                break;
            }
        }
        if(i==num)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}