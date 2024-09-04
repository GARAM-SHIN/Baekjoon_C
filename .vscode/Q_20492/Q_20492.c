// 세금

#include <stdio.h>

int main(void) {
    int N, t1, t2;

    scanf("%d", &N);

    t1 = N*0.78;
    t2 = (N*0.8) + ((N*0.2)*0.78);

    printf("%d %d\n", t1, t2);

    return 0;
}