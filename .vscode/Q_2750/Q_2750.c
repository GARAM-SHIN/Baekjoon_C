// 수 정렬하기 : 시간 복잡도가 Q(n^2)인 정렬 알고리즘으로 풀 수 있다. 예를 들면 삽입 정렬, 거품 정렬 등이 있습니다.

#include <stdio.h>

int main(void)
{
    int N, tmp;
    int num[1001];

    scanf("%d", &N);

    for(int i=0;i<N;i++)
    {
        scanf("%d", &num[i]);
    }

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N-1;j++)
        {
            if(num[j+1]<num[j])
            {
                tmp=num[j+1];
                num[j+1]=num[j];
                num[j]=tmp;
            }
        }
    }

    for(int i=0;i<N;i++)
    {
        printf("%d\n", num[i]);
    }

    return 0;
}