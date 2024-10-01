// 체육은 수학과목 입니다

#include <stdio.h>

int main(void) {
    int H, W;

    scanf("%d %d", &H, &W);

    if(H<W)
    {
        printf("%d\n", H*50);
    }
    else printf("%d\n", W*50);

    return 0;
}
