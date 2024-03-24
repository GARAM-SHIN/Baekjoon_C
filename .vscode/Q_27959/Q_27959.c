// 초코바

#include <stdio.h>

int main(void)
{
    int N, M;

    scanf("%d %d", &N, &M);

    if((N*100)>=M)
    {
        printf("Yes\n");
    }
    else printf("No\n");

    return 0;
}