// 너의 이름은 몇 점이니?

#include <stdio.h>

int main(void)
{
    int n, result=0;
    char name[101];

    scanf("%d", &n);
    scanf("%s", &name);

    for(int i=0;i<n;i++)
    {
        result+=(int)(name[i]-64);
    }

    printf("%d\n", result);

    return 0;
}