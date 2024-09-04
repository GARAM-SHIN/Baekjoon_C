// 주사위

#include <stdio.h>

int main(void) {
    int T;
    int x,y;
    int count=1;

    scanf("%d", &T);

    while(T--)
    {
        scanf("%d %d", &x, &y);
        printf("Case %d: %d\n", count, x+y);
        count++;
    }

    return 0;
}