// 수들의 합

#include <stdio.h>

#define max_size 4294967296

int main()
{
    long long S;
    long long sum = 0;
    long long n = 0;
    long long count = 0;

    scanf("%d", &S);

    while(1)
    {
        n++;
        sum += n;
        count++;

        if (sum > S)
        {
            printf("%lld\n", count - 1);
            break;
        }
    }

    return 0;
}