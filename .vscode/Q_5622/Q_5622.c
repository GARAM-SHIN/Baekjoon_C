// 다이얼 : 규칙에 따라 문자에 대응하는 수를 출력하는 문제 _ F

#include <stdio.h>
#include <string.h>

int main(void)
{
    int time[26]={3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
    int min=0;

    char str[16];
    scanf("%s", str);

    for(int i=0;i<strlen(str);i++)
    {
        min+=time[str[i]-'A'];
    }
    printf("%d", min);

    return 0;
}