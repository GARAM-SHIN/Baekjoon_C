// 음계

#include <stdio.h>
#include <string.h>

int main()
{
    int scale[8];
    int check;

    for (int i=0; i<8; i++)
    {
        scanf("%d", &scale[i]);
    }

    if (scale[0] == 1)
    {
        for (int i=1; i<8; i++)
        {
            if (scale[i] == i + 1)
                check = 1;
            else
            {
                check = 0;
                break;
            }
        }
    }

    else if (scale[0] == 8)
    {
        for (int i=1; i<8; i++)
        {
            if (scale[i] == 8 - i)
                check = 2;
            else
            {
                check = 0;
                break;
            }
        }
    }

    if (check == 1)
        printf("ascending\n");
    else if (check == 2)
        printf("descending\n");
    else
        printf("mixed\n");

    return 0;
}