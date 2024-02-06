// 문자열 반복 : 각 문자를 반복하여 출력하는 문제

#include <stdio.h>
#include <string.h>

int main(void)
{
    int T, R;
    char S[21];

    scanf("%d", &T);
    
    while(T--)
    {
        scanf("%d %s", &R, S);
        for(int i=0;i<strlen(S);i++)
        {
            for(int j=0;j<R;j++)
            {
                printf("%c", S[i]);
            }
        }
        printf("\n");
    }

    return 0;
}