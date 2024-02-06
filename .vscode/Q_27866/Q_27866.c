// 문자와 문자열 : 문자열을 입력받고 문자열의 특정 위치를 읽어 봅시다.

#include <stdio.h>

int main(void)
{
    int num;
    char s[1001];

    scanf("%s",s);
    scanf("%d", &num);

    printf("%c", s[num-1]);

    return 0;
}