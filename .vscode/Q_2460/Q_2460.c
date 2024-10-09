// 지능형 기차 2

#include <stdio.h>

int main(void) {
    int up, down;
    int people=0;
    int max=-10000;

    for(int i=0;i<10;i++)
    {
        scanf("%d %d", &down, &up);

        people = (people-down)+up;

        if(people>max) max=people;
    }

    printf("%d\n", max);

    return 0;
}