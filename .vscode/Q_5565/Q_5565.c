// 영수증

#include <stdio.h>

int main(void) {
    int price, pay;

    scanf("%d", &price);

    for(int i=0;i<9;i++)
    {
        scanf("%d", &pay);

        price-=pay;
    }

    printf("%d\n", price);

    return 0;
}