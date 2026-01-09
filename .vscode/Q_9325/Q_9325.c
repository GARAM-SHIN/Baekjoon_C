// 얼마?

#include <stdio.h>

int main(void)
{
    int test;
    int price = 0;

    scanf("%d", &test);

    for (int i=0; i<test; i++)
    {
        int s, n;
        scanf("%d", &s);

        price += s;

        scanf("%d", &n);

        for (int j=0; j<n; j++)
        {
            int p, q;

            scanf("%d %d", &q, &p);

            price += q * p;
        }

        printf("%d\n", price);

        price = 0;
    }

    return 0;
}