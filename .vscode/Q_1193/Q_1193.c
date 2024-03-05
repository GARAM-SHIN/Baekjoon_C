// 분수찾기 : 분수의 순서에서 규칙을 찾는 문제 _ F

#include <stdio.h>

int main(void)
{
    int X;
    int line=1;

    scanf("%d", &X);

    while(1)
    {
        if((line-1)*(line)/2<X && X<=(line)*(line+1)/2)
        {
            break;
        }
        line++;
    }

    if(line%2!=0)
    {
        int a=line*(line+1)/2;
        printf("%d", a-X+1);
        printf("/");
        printf("%d", line-(a-X));
    }
    else
    {
        int a=line*(line+1)/2;
        printf("%d", line-(a-X));
        printf("/");
        printf("%d", a-X+1);
    }

    return 0;
}