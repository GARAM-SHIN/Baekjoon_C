// 알고리즘 수업 - 알고리즘의 수행 시간 3 : ...실행 횟수가 "대략적으로" 얼마나 빨리 커지는지는 비교적 간단하게 알 수 있습니다.
// 이 문제들에서 출력의 두 번째 줄이 바로 그것입니다.

#include <stdio.h>

int main(void)
{
    long long n;

    scanf("%lld", &n);

    printf("%lld\n2\n", n*n);

    return 0;
}