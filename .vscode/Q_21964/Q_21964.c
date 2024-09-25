// 선린인터넷고등학교 교가

#include <stdio.h>

int main(void) 
{
    int N;
    char str[100000];

    scanf("%d", &N);
    scanf("%s", str);

    for(int i=N-5;i<N;i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}