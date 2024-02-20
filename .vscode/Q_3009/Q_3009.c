// 네 번째 점 : 직사각형을 완성하는 문제

#include <stdio.h>

int main(void)
{
    int x[3], y[3];
    int dot_x, dot_y;

    for(int i=0;i<3;i++)
    {
        scanf("%d %d", &x[i], &y[i]);
    }

    if(x[0]==x[1]) dot_x=x[2];
    else if(x[0]==x[2]) dot_x=x[1];
    else dot_x=x[0];

    if(y[0]==y[1]) dot_y=y[2];
    else if(y[0]==y[2]) dot_y=y[1];
    else dot_y=y[0];


    printf("%d %d\n", dot_x, dot_y);

    return 0;
}