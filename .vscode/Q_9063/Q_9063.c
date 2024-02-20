// 대지 : 옥구슬을 포함하는 직사각형을 찾는 문제

#include <stdio.h>

int main(void)
{
    int N;
    int min_x=10000, min_y=10000;
    int max_x=-10000, max_y=-10000;
    int area=0;
    int x, y;

    scanf("%d", &N);

    while(N--)
    {
        scanf("%d %d", &x, &y);
        
        if(x>=max_x) max_x=x;
        if(x<=min_x) min_x=x;
        if(y>=max_y) max_y=y;
        if(y<=min_y) min_y=y;
    }


    area=(max_x-min_x)*(max_y-min_y);

    printf("%d\n", area);
    return 0;
}