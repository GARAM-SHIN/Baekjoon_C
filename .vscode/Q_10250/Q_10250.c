// ACM 호텔

#include <stdio.h>

int main()
{
    int test;
    int H, W, N;

    scanf("%d", &test);

    while(test--)
    {
        scanf("%d %d %d", &H, &W, &N);

        int x, y;

        x = N / H + 1;
        y = N % H;

        if(y == 0)
        {
            x = N / H;
            y = H;
        }

        printf("%d%02d\n", y, x);
    }

    return 0;
}