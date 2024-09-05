// 10부제

#include <stdio.h>

int main(void) {
    int date, car[5];
    int count=0;

    scanf("%d", &date);
    for(int i=0;i<5;i++)
    {
        scanf("%d", &car[i]);

        if(car[i]==date)
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}