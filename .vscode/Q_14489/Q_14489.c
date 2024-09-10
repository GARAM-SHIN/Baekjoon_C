// 치킨 두 마리 (...)

#include <stdio.h>

int main(void) {
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    printf("%d\n", (A+B)<(C*2)?A+B:(A+B)-(C*2));

    return 0;
}