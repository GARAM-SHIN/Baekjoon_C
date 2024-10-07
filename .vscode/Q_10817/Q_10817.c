// 세 수

#include <stdio.h>

int main(void) {
    int A, B, C;
    int result;

    scanf("%d %d %d", &A, &B, &C);

    if(A>=B && A>=C)
    {
        if(B>C) result=B;
        else result=C;
    }
    else if(B>=A && B>=C)
    {
        if(A>C) result=A;
        else result=C;
    }
    else {
        if(A>B) result=A;
        else result=B;
    }

    printf("%d\n", result);

    return 0;
}