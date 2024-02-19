// 세탁소 사장 동혁 : 거스름돈 계산하는 문제

#include <stdio.h>

int main(void)
{
 int T, money;
 int Q=0, D=0, N=0, P=0;

 scanf("%d", &T);   

 for(int i=0;i<T;i++)
 {
    scanf("%d", &money);

    Q=money/25;
    money-=Q*25;

    D=money/10;
    money-=D*10;

    N=money/5;
    money-=N*5;

    P=money;

    printf("%d %d %d %d\n", Q, D, N, P);
 }

 return 0;
}