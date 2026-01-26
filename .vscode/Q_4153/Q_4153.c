// 직각삼각형

#include <stdio.h>

int main()
{
    int A, B, C;

    while(1)
    {
        scanf("%d %d %d", &A, &B, &C);

        if(A == 0 && B == 0 & C == 0)
            break;
        
        long num1, num2, num3;

        num1 = A * A, num2 = B * B, num3 = C * C;
        
        if(num1 + num2 == num3 || num1 + num3 == num2 || num2 + num3 == num1)
            printf("right\n");
        else 
            printf("wrong\n");
    }

    return 0;
}