// 적어도 대부분의 배수

#include <stdio.h>

int main()
{
    int num[5];
    int count = 0;
    int result = 0;

    for (int i=0; i<5; i++)
    {
        scanf("%d", &num[i]);
    }

    for (result=1; ;result++)
    {
        for (int i=0; i<5; i++)
        {
            if (result % num[i] == 0)
                count++;
        }

        if (count >= 3)
        {
            printf("%d\n", result);
            break;
        }
        else count = 0;
    }

    return 0;
}