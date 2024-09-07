// 사장님 도박은 재미로 하셔야 합니다

#include <stdio.h>

int main(void) {
    int money;
    int sum=0;

    while(1)
    {
        scanf("%d", &money);

        if(money==-1) break;

        sum+=money;
    }

    printf("%d\n", sum);

    return 0;
}