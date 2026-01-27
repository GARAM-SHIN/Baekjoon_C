// 한수

#include <stdio.h>

int ap(int num)
{
    int count = 99;
    int a, b, c;

    if (num < 100) 
        return num;
    
    for (int i=100; i<=num; i++)
    {
        a = i / 100;
        b = (i / 10) % 10;
        c = i % 10;

        if (a - b == b -c)    // 등차수열 한수 공식 : a - b == b - c
            count++;
    }

    return count;
}

int main()
{
    int X;

    scanf("%d", &X);

    printf("%d\n", ap(X));

    return 0;
}