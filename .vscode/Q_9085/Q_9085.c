// 더하기

#include <stdio.h>

int main(void) {
    int T, N;
    int num[11];
    int sum=0;

    scanf("%d", &T);

    for(int i=0;i<T;i++)
    {
        scanf("%d", &N);

        for(int j=0;j<N;j++)
        {
            scanf("%d", &num[j]);
            sum += num[j];
        }

        printf("%d\n", sum);
        sum=0;
    }

    return 0;
}