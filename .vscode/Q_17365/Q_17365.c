// 욱 제

#include <stdio.h>
#include <math.h>

int main(void) {
    double A, B, M, E;

    scanf("%lf %lf", &A, &B);

    M=(B-A)/400;
    
    E=1+pow(10,M);

    printf("%lf\n", 1/E);

    return 0;    
}