// 색종이 : 2차원 배열을 활용하여 색종이로 평면을 덮는 문제

#include <stdio.h>

int main(void)
{
    int num, x, y;
    int area=0;
    int white[101][101]={0,};

    scanf("%d", &num);

    for(int i=0;i<num;i++)
    {
        scanf("%d %d", &x, &y);
        for(int j=y;j<y+10;j++)
        {
            for(int k=x;k<x+10;k++)
            {
                white[j][k]=1;
            }
        }
    }

    for(int j=0;j<100;j++)
    {
        for(int k=0;k<100;k++)
        {
            if(white[j][k]==1)
            {
                area++;
            }
        }
    }

    printf("%d", area);

    return 0;
}