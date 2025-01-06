// 더하기 사이클

#include <stdio.h>

int main()
{
    int input;
    int count=0;

    scanf("%d", &input);

    int N=input;

    do{
        N=(N%10)*10+(N/10+N%10)%10;
        ++count;
    }while (N!=input);

    printf("%d\n", count);

    return 0;
}