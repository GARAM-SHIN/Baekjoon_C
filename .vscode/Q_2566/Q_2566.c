// 최댓값 : 최댓값을 2차원에서 찾는 문제

#include <stdio.h>

int main(void)
{
    int num[10][10];
    int max=-9999;
    int index_row=0, index_col=0;

    for(int i=1;i<10;i++)
    {
        for(int j=1;j<10;j++)
        {
            scanf("%d", &num[i][j]);
        }
    }

    for(int i=1;i<10;i++)
    {
        for(int j=1;j<10;j++)
        {
            if(max<=num[i][j])
            {
                max=num[i][j];
                index_row=i;
                index_col=j;
            }
        }
    }

    printf("%d \n%d %d\n", max, index_row, index_col);

    return 0;
}