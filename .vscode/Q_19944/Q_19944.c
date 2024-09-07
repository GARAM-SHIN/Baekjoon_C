// 뉴비의 기준은 뭘까?

#include <stdio.h>

int main(void) {
    int N, M;

    scanf("%d %d", &N, &M);

    if(M<=2) printf("NEWBIE!\n");
    else if(N<M) printf("TLE!\n");
    else printf("OLDBIE!\n");

    return 0;
}