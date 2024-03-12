// 알고리즘 수업 - 알고리즘의 수행 시간 4 : n이 커질수록 n과 n^2의 차이는 어마어마하게 벌어지기 떄문에,

#include <stdio.h>

int main(void)
{
    long long n;

    scanf("%lld", &n);

    printf("%lld\n2\n", (n-1)*n/2);

    return 0;
}