// 삼각형과 세 변 : 변의 길이를 보고 삼각형을 판별하고 분류하는 문제 _ F

#include <stdio.h>

void triangle(int a, int b, int c, int max);
int get_max(int a, int b, int c, int max);

int main(void)
{
    int a, b, c;
    int max=0;
    
    scanf("%d %d %d", &a, &b, &c);

    while((a!=0)&&(b!=0)&&(c!=0))
    {
        max=get_max(a,b,c,max);
        triangle(a,b,c,max);
        scanf("%d %d %d", &a, &b, &c);
    }
}

int get_max(int a, int b, int c, int max)
{
    if(a>b)
    {
        if(a>c)
        {
            max=a;
        }
        else
        {
            max=c;
        }
    }
    else
    {
        if(b>c)
        {
            max=b;
        }
        else
        {
            max=c;
        }
    }

    return max;
}

void triangle(int a, int b, int c, int max)
{
    if(max<((a+b+c)-max))
    {
        if((a==b)&&(a==c))
        {
            printf("Equilateral\n");
        }
        else if((a==b && a!=c)||(a==c &&a!=b)||(b==c&&b!=a))
        {
            printf("Isosceles\n");
        }
        else printf("Scalene\n");
    }
    else printf("Invalid\n");
}