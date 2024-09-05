// 특별한 날

#include <stdio.h>

int main(void) {
    int month, date;

    scanf("%d %d", &month, &date);

    if(month<2)
    {
        printf("Before\n");
    }
    else if (month==2)
    {
        if(date<18) printf("Before\n");
        else if(date==18) printf("Special\n");
        else printf("After\n");
    }
    else printf("After\n");

    return 0;
}