// 셀프 넘버

#include <stdio.h>

int selfnum(int num)
{
    int selfnum = num;

    while(num > 0)
    {
        selfnum += num % 10;
        num /= 10;
    }

    return selfnum;
}

int main()
{
    int num[10001];
    int digit = 0;

    for (int i=1; i<10001; i++)
    {
        digit = selfnum(i);

        if (digit < 10001) num[digit]=1;
    }

    for (int i=1; i<10001; i++)
    {
        if(num[i] != 1)
            printf("%d\n", i);
    }

    return 0;
}