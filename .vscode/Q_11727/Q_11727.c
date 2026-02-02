// 2 * n 타일링2

#include <stdio.h>

int main()
{
    int n;
    int dp[1001];

    scanf("%d", &n);

    dp[1] = 1;
    dp[2] = 3;

    for (int i=3; i<=n; i++)
    {
        dp[i] = dp[i - 1] + 2 * dp[i - 2];
        dp[i] = dp[i] % 10007;
    }

    printf("%d\n", dp[n]);

    return 0;
}