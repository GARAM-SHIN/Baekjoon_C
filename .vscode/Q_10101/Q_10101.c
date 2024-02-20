// 삼각형 외우기 : 각도를 보고 삼각형을 판별하고 분류하는 문제

#include <stdio.h>

int main(void)
{
    int a, b, c;

   scanf("%d %d %d", &a, &b, &c);

   if((a==60)&&(b==60)&&(c==60))
   {
    printf("Equilateral\n");
   }

   else if(a+b+c==180)
   {
    if((a==b)||(b==c)||(c==a))
    {
        printf("Isosceles\n");
    }
    else printf("Scalene\n");
   }

   else printf("Error\n");

   return 0;
}