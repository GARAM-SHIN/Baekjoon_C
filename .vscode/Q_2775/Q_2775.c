// 부녀회장이 될테야

#include <stdio.h>

int main()
{
    int test;
    int k, n;
    int people[15][15] = {0, };

    scanf("%d", &test);

    for(int j=0; j<15; j++)
    {
        people[0][j] = j;
    }

    for (int i=1; i<15; i++)
    {
        for (int j=1; j<15; j++)
        {
            people[i][j] = people[i-1][j] + people[i][j-1];
        }
    }

    for (int i=0; i<test; i++)
    {
        scanf("%d", &k);
        scanf("%d", &n);

        printf("%d\n", people[k][n]);
    }

    return 0;
}