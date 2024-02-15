// 진법 변환 : 진법에 대해 배우는 문제 _ F

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int i=0;
   long long B, total=0;
   char *N=malloc(sizeof(char)*100000);
   
   scanf("%s", N);
   scanf("%lld", &B);

   while(N[i]!='\0')
   {
    total*=B;
    if(N[i]>='A'&&N[i]<='Z')
    {
        total += N[i]-55;
    }
    else total += N[i]-'0';

    i++;
   }

   printf("%lld\n", total);

   free(N);
   return 0;
}