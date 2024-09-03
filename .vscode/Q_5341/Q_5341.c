// Pyramids

#include <stdio.h>

int main(void) {
    int n, pyramid;

    while(1)
    {
        pyramid=0;
        scanf("%d", &n);

        if(n==0)
        {
            return 0;
        }

        for(int i=1;i<=n;i++)
        {
            pyramid += i;
        }

        printf("%d\n", pyramid);
    }

    return 0;
}