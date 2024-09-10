// 전자레인지 

#include <stdio.h>

int main(void) {
    int A, B, C, D, E;

    scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);

    if(A<0) printf("%d\n", (-1*A)*C+D+B*E);
    else printf("%d\n", (B-A)*E);

    return 0;
}