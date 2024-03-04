// 최소공배수 : 최대공약수만 구해도 최소공배수를 바로 알 수 있습니다.

#include <stdio.h>

int main(void)
{
    int T;
    int A, B, i, j;
    int gcd=0, lcm=0;

    scanf("%d", &T);

   for(i=0;i<T;i++)
    {
        scanf("%d %d", &A, &B);

        for(j=1;(j<=A)&&(j<=B);++j)
        {
           if((A%j==0) && (B%j==0))
           {
            gcd=j;
           }
        }

        lcm=(A*B)/gcd;

        printf("%d\n", lcm);
    }

    return 0;
}