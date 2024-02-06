// 단어 길이 재기 : 문자열을 입력받고 길이를 재는 문제

#include <stdio.h>
#include <string.h>

int main(void)
{
    char ary[101];
    int len=0;

    scanf("%s", ary);

    len=strlen(ary);

    printf("%d", len);

    return 0;
}