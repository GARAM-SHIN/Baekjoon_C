// 뒤집힌 덧셈

#include <stdio.h>

int main()
{
    int X, Y;

    scanf("%d %d", &X, &Y);

    int revX=0, revY=0;
    int sum=0, revSum=0;

    while(X>0)
    {
        revX*=10;
        revX+=(X%10);
        X/=10;
    }

     while(Y>0)
    {
        revY*=10;
        revY+=(Y%10);
        Y/=10;
    }

    sum=revX+revY;

    while(sum>0)
    {
        revSum*=10;
        revSum+=(sum%10);
        sum/=10;
    }

    printf("%d\n", revSum);

    return 0;
}