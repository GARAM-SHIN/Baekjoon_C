// 알고리즘 수업 - 알고리즘의 수행 시간 5 : "대략적으로"만 파악해도 자신의 코드가 시간 초과가 날 지 아닐지를 어느 정도 예측할 수 있습니다.

#include <stdio.h>

int main(void)
{
    long long n;

    scanf("%lld", &n);

    printf("%lld\n3\n", n*n*n);

    return 0;
}