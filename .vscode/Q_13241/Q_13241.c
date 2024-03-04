// 최소공배수 : 유클리드 호제법으로 최대공약수를 (그리고 최소공배수도) 빠르게 구하는 문제

#include <stdio.h>

int main(void)
{
   long long int A, B, gcd, lcm;
   int j;

    scanf("%lld %lld", &A, &B);
    
    for(j=1;(j<=A)&&(j<=B);++j)
    {
        if((A%j==0)&&(B%j==0))
        {
            gcd=j;
        }
    }

    lcm=(A*B)/gcd;

    printf("%lld\n", lcm);

    return 0;
}