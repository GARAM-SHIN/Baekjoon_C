// 그대로 출력하기 : 그대로 출력하기

#include <stdio.h>

int main(void)
{
    char str;

    while(scanf("%c", &str)!=EOF)
    {
        printf("%c", str);
    }
    
    return 0;
}