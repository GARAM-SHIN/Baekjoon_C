// 피보나치 함수 : DP 해결

#include <stdio.h>

int fibonacci(int n)
{
    int d[41];
    int i;

    d[0] = 0;
    d[1] = 1;

    for (i=2; i<=n; i++)
    {
        d[i] = d[i-1] + d[i-2];
    }

    return d[n];
}

int main()
{
    int num;
    int s;
    
    scanf("%d", &num);

    for (int i=0; i<num; i++)
    {
        scanf("%d", &s);
        
        if (s==0) 
            printf("%d %d\n", 1, 0);
        else if (s==1)
            printf("%d %d\n", 0, 1);
        else
            printf("%d %d\n", fibonacci(s-1), fibonacci(s));
    }

    return 0;
}