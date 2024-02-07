// 세로읽기 : 문자열의 배열을 다루는 문제

#include <stdio.h>

int main(void)
{
    char ary[5][16]={0, };

    for(int i=0;i<5;i++)
    {
        scanf("%s", ary[i]);
    }

    for(int j=0;j<15;j++)
    {
        for(int i=0;i<5;i++)
        {
            if(ary[i][j]!='\0')
            {
                putchar(ary[i][j]);
            }
        }
    }

    return 0;
}