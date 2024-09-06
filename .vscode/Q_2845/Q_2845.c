// 파티가 끝나고 난 뒤

#include <stdio.h>

int main(void) {
    int L, P;
    int people[5];

    scanf("%d %d", &L, &P);

    for(int i=0;i<5;i++)
    {
        scanf("%d", &people[i]);
        people[i]-=(L*P);
    }

    for(int i=0;i<5;i++)
    {
        printf("%d ", people[i]);
    }

    printf("\n");

    return 0;
}