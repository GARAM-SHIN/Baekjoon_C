// 방학 숙제

#include <stdio.h>

int main(void) {
    int L, A, B, C, D;
    int korean=0, math=0;

    scanf("%d %d %d %d %d", &L, &A, &B, &C, &D);

   if(A%C==0)
   {
    korean=A/C;
   }
   else korean=A/C+1;

   if(B%D==0)
   {
    math=B/D;
   }
   else math=B/D+1;

    if(korean>=math)
    {
        printf("%d\n", L-korean);
    }
    else printf("%d\n", L-math);

    return 0;
}