// Shares

#include <stdio.h>

int main(void) {
    int N, S;

    while(scanf("%d %d", &N, &S) != EOF) {
        printf("%d\n", S/(N+1));
    }

    return 0;
}