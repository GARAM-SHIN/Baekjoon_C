// 몇개고?

#include <stdio.h>

int main(void) {
    int T, S;

    scanf("%d %d", &T, &S);

    if(T>=12 && T<=16)
    {
        if(S==0)
        {
            printf("320\n");
        }
        else printf("280\n");
    }
    else printf("280\n");

    return 0;
}