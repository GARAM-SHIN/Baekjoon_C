// 세 막대 : 가능한 한 둘레가 긴 삼각형을 만드는 문제

#include <stdio.h>

int main(void)
{
    int a, b, c;
    int rect=0;

    scanf("%d %d %d", &a, &b, &c);

    if(a>=b+c)
    {
        if(rect<2*(b+c)-1)
        {
            rect=2*(b+c)-1;
        }
    }

    if(b>=a+c)
    {
        if(rect<2*(a+c)-1)
        {
            rect=2*(a+c)-1;
        }
    }

    if(c>=a+b)
    {
        if(rect<2*(a+b)-1)
        {
            rect=2*(a+b)-1;
        }
    }

    printf("%d\n", rect?rect:a+b+c);

    return 0;
}