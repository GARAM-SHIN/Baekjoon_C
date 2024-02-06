// 단어의 개수 : 단어의 개수를 구하는 문제 _ F

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[1000001];
    int count=1;

    scanf("%[^\n]", str);

    if(str[0]!=' ')
    {
        count++;
    }

    for(int i=1; i<strlen(str);i++)
    {
        if(str[i-1]==' '&&str[i]!=' ')
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}