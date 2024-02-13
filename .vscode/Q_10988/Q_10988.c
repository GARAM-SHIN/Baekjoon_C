// 팰린드롬인지 확인하기 : 팰린드롬인지 확인하는 문제

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[101];

    scanf("%s", str);

   for(int i=0;i<=strlen(str)/2;i++)
   {
    if(str[i]!=str[strlen(str)-i-1])
    {
        printf("0");
        return 0;
    }
   }

   printf("1");
    return 0;
}