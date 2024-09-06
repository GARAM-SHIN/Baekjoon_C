// 상근날드

#include <stdio.h>

int main(void) {
    int high, middle, low, coke, soda;
    int drink=0, buger=0;

    scanf("%d %d %d %d %d", &high, &middle, &low, &coke, &soda);

    if(coke<=soda)
    {
        drink=coke;
    }   
    else drink=soda;

    if(high<=middle)
    {
        if(high<=low) buger=high;
        else buger=low;
    }
    else if(high>middle)
    {
        if(middle<=low) buger=middle;
        else buger=low;
    }

    printf("%d\n", buger+drink-50);

    return 0;
}