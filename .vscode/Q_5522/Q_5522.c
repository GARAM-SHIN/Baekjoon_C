// 카드 게임

#include <stdio.h>

int main(void)
{
    int num[5];
    int sum=0;

    for(int i=0;i<5;i++)
    {
        scanf("%d", &num[i]);
        sum+=num[i];
    }

    printf("%d\n", sum);

    return 0;
}