// 문자열 : 문...제

#include <stdio.h>
#include <string.h>

int main(void)
{
    int T;
    char ary[1001];

    scanf("%d", &T);

    while(T--)
    {
        scanf("%s", ary);

        printf("%c%c \n", ary[0],ary[strlen(ary)-1]);
    }

    return 0;
}