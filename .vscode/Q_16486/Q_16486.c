// 운동장 한 바퀴

#include <stdio.h>

#define pi 3.141592

int main(void) {
    int d1, d2;

    scanf("%d %d", &d1, &d2);

    printf("%lf\n", (d1*2)+(2*pi*d2));

    return 0;
}