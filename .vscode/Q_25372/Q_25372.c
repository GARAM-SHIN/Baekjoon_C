// 성택이의 은밀한 비밀번호

#include <stdio.h>
#include <string.h>

int main(void)
{
    char password[21];
    int N;

    scanf("%d", &N);

    for(int i=0;i<N;i++)
    {
        scanf("%s", password);

        if(strlen(password)>=6 && strlen(password)<=9)
        {
        printf("yes\n");
        }
        else printf("no\n");
    }

    return 0;
}