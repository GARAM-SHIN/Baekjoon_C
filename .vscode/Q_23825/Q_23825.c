// SASA 모형을 만들어보자

#include <stdio.h>

int main(void)
{
    int N, S;
    int countN=0, countS=0;

    scanf("%d %d", &N, &S);

    countN = N / 2;
    countS = S / 2;

    if(countN<countS) printf("%d\n", countN);
    else printf("%d\n", countS);

    return 0;
}