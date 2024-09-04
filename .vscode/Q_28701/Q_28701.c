// 세제곱의 합

#include <stdio.h>

int main(void) {
    int N, sum=0, pow=0;

    scanf("%d", &N);

    for(int i=1;i<=N;i++)
    {
        sum+=i;
        pow+=(i*i*i);
    }

    printf("%d\n", sum);
    printf("%d\n", sum*sum);
    printf("%d\n", pow);

    return 0;
}