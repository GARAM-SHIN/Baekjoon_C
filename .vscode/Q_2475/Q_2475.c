// 검증수

#include <stdio.h>

int main(void)
{
    int num[6];
    int sum=0;

    for(int i=0;i<5;i++)
    {
        scanf("%d", &num[i]);
        sum+=(num[i]*num[i]);
    }

    printf("%d\n", sum%10);

    return 0;
}