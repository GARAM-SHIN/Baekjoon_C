// 아!

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[1000];
    char str2[1000];

    scanf("%s %s", str1, str2);

    if(strlen(str1)<strlen(str2))
    {
        printf("no\n");
    }
    else printf("go\n");

    return 0;
}