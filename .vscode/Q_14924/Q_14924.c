// 폰 노이만과 파리

#include <stdio.h>

int main(void) {
    int S, T, D;

    scanf("%d %d %d", &S, &T, &D);

    printf("%d\n", (D/(S*2))*T);

    return 0;
}