// 소트인사이드 : 숫자를 정렬하는 문제 _ F

#include <stdio.h>
#include <string.h>

int main(void)
{
    char num[10];
    int i, j;

    scanf("%s", num);

    for(i=9;i>=0;i--)
    {
        for(j=0;j<strlen(num);j++)
        {
            if(num[j]==i+48)
            {
                printf("%c", num[j]);
            }
        }
    }

    return 0;
}