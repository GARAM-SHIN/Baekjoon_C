// 직사각형에서 탈출 : 직사각형과 점의 거리를 구하는 문제

#include <stdio.h>

int main(void)
{
    int x,y;
    int w,h;
    int min_x=9999, min_y=9999;

    scanf("%d %d %d %d", &x, &y, &w, &h);

    (w-x>=x-0)?(min_x=x):(min_x=w-x);
    
    (h-y>=y-0)?(min_y=y):(min_y=h-y);
    
    printf("%d\n", (min_x<min_y)?min_x:min_y);

    return 0;
}