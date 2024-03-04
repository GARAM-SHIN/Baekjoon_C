// 분수 합 : 분수를 더하고 약분하는 문제

#include <stdio.h>

int main(void)
{
   int A[2], B[2];
   int up=0, down=0, j=2;

   for(int i=0;i<2;i++)
   {
    scanf("%d %d", &A[i], &B[i]);
   }

   up=(A[0]*B[1])+(A[1]*B[0]);
   down=B[0]*B[1];

   while((j<=up)&&(j<=down))
   {
    if((up%j!=0)||(down%j!=0))
    {
        j++;
    }
    else {
        up/=j;
        down/=j;
    }
   }
   
   printf("%d %d\n", up, down);

   return 0;
}