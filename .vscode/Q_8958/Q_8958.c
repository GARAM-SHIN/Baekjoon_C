// OX 퀴즈

#include <stdio.h>
#include <string.h>

int main()
{
    int test;
    char str[100];
    int total, count;

    scanf("%d", &test);

    for (int i=0; i<test; i++)
    {   
        total = 0;
        count = 1;

        scanf("%s", str);

        for (int j=0; j<strlen(str); j++)
        {  
            if(str[j] == 'O')
            {
                total += count;
                count++;
            }
            else count = 1;
        }

        printf("%d\n", total);
    }

    return 0;
}