// KMP는 왜 KMP일까?

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[101];
    int length = 0;
    char alpha;

    scanf("%s", str);

    length = strlen(str);

    printf("%c", str[0]);

    for (int i=0; i<length; i++)
    {
        if ((int)(str[i]) == 45)
            printf("%c", str[i+1]);
    }
    printf("\n");

    return 0;
}