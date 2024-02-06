// 숫자의 합 : 정수를 문자열로 입력받는 문제

#include <stdio.h>

int main(void)
{
   int N, sum=0;
   char ary[101];

   scanf("%d %s", &N, ary);
   for(int i=0;i<N;i++)
   {
    sum+=ary[i]-'0';
   }

   printf("%d", sum);

   return 0;
}