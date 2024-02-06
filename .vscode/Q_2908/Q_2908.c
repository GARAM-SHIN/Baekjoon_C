// 상수 : 숫자를 뒤집어서 비교하는 문제

#include <stdio.h>

int reverse(int num);

int main(void)
{
    int num1, num2;
    int rnum1, rnum2;

    scanf("%d %d", &num1, &num2);

    rnum1=reverse(num1);
    rnum2=reverse(num2);

    if(rnum1>rnum2)
    {
        printf("%d\n", rnum1);
    }
    else printf("%d\n", rnum2);

    return 0;
}

int reverse(int num)
{
    int rnum=0;

    for(int i=num;i;i/=10)
    {
        rnum=rnum*10+i%10;
    }

    return rnum;
}