// 약수

#include <stdio.h>

int main(void)
{
    int N, i, temp;
    int max=-9999, min=9999;

    scanf("%d", &N);

     for(i=0;i<N;i++) {
        scanf("%d", &temp);

        max = max < temp ? temp : max;
        min = min > temp ? temp : min;
    }

    printf("%d", max * min);

    return 0;
}