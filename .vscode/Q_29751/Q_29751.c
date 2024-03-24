// 삼각형

#include <stdio.h>

int main(void)
{
    int W, H;
    double area;

    scanf("%d %d", &W, &H);

    area=W*H*0.5;

    printf("%.1lf", area);

    return 0;
}