// 야바위 대장

#include <stdio.h>

int main(void)
{
    char str[101];
    int T, A, B;
    char swap;

    scanf("%s", &str);
    scanf("%d", &T);

    for(int i=0;i<T;i++)
    {
        scanf("%d %d", &A, &B);

        swap=str[A];
        str[A]=str[B];
        str[B]=swap;

        A=0, B=0;
    }

    printf("%s\n", str);

    return 0;
}