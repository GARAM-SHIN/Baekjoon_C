// 동전 O

#include <stdio.h>

int main()
{
    int N, K;
    int A[10];
    int count = 0;

    scanf("%d %d", &N, &K);

    for (int i=0; i<N; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int j=N-1; j>=0; j--)
    {
        if (K >= A[j])
        {
            count += K / A[j];
            K %= A[j];
        }
        else if (j == 0 && K > 0)
            count++;
    }

    printf("%d\n", count);

    return 0;
}