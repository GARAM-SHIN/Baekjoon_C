// 주사위 게임

#include <stdio.h>

int main(void)
{
    int n;
    int scoreA = 100, scoreB= 100;
    int A, B;

    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d %d", &A, &B);

        if(A>B) scoreB -= A;
        else if (A<B) scoreA -= B; 
    }

    printf("%d\n%d\n", scoreA, scoreB);

    return 0;
}