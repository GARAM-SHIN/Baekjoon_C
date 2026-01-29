// 거스름돈

#include <stdio.h>

int main()
{
    int price;
    int change = 0;
    int count = 0;
    int money[6] = {500, 100, 50, 10, 5, 1};

    scanf("%d", &price);

    change = 1000 - price;

    for(int i=0; i<6; i++)
    {
        count += change / money[i];
        change %= money[i];
    }

    printf("%d\n", count);

    return 0;
}