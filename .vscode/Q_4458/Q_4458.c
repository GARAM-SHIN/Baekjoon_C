// 첫 글자를 대문자로

#include <stdio.h>

int main(void) {
    int N;
    char str[31];

    scanf("%d", &N);

    getchar();

    for(int i=0;i<N;i++)
    {
        gets(str);
        if('a'<=str[0]&&str[0]<='z') str[0]-=32;
        printf("%s\n", str);
    }

    return 0;
}