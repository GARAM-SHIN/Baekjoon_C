// SUAPC 2024 Winter

#include <stdio.h>

int main(void) {
    int N;

    scanf("%d", &N);

    switch(N) 
    {
        case 1:
        printf("11\n");
        printf("A B C D E F G H J L M\n");
        break;
        case 2:
        printf("9\n");
        printf("A C E F G H I L M\n");
        break;
        case 3:
        printf("9\n");
        printf("A C E F G H I L M\n");
        break;
        case 4:
        printf("9\n");
        printf("A B C E F G H L M\n");
        break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        printf("8\n");
        printf("A C E F G H L M\n");
        break;
        case 10:
        printf("8\n");
        printf("A B C F G H L M\n");
    }

    return 0;
}