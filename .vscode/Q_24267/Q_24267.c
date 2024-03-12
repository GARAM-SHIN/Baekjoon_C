// 알고리즘 수업 - 알고리즘의 수행 시간 6 : 그 역할을 하는 것이 바로 시간 복잡도입니다.

#include <stdio.h>

int main(void)
{
    long long n;

    scanf("%lld", &n);

    printf("%lld\n3\n",(n-2)*(n-1)*n/6);

    return 0;
}