// 1, 2, 3 더하기

#include <stdio.h>

int main()
{
    int test, n;
    int sum[11] = {1, 2, 4};

    scanf("%d", &test);

    for (int i=3; i<11; i++)
    {
        sum[i] = sum[i-1] + sum[i-2] + sum[i-3];
    }

    while(test--)
    {
        scanf("%d", &n);

        printf("%d\n", sum[n-1]);
    }

    return 0;
}