// 줄번호

#include <stdio.h>

int main(void) {
    int N;
    char str[50];

    scanf("%d", &N);

    getchar();

    for(int i=1;i<=N;i++)
    {
        gets(str);
        printf("%d. %s\n", i, str);
    }

    return 0;
}