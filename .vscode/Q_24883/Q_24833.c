// 자동완성

#include <stdio.h>

int main(void) {
    char alpha;

    scanf("%c", &alpha);

    if(alpha=='N' || alpha=='n')
    {
        printf("Naver D2\n");
    }
    else
    {
        printf("Naver Whale\n");
    }

    return 0;
}