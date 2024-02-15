// 단어 공부 : 주어진 단어에서 가장 많이 사용된 알파벳을 출력하는 문제 _ F

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[1000001];
    char alpha[26];
    char ans;
    int max=0;

    scanf("%s", str);

    int size=strlen(str);

    for(int i=0;i<size;i++)
    {
        if(str[i]>='a')
        {
            alpha[str[i]-'a']++;
        }
        else alpha[str[i]-'A']++;
    }

    for(int i=0;i<26;i++)
    {
        if(alpha[i]==max)
        {
            ans='?';
        }
        else if(alpha[i]>max)
        {
            max=alpha[i];
            ans='A'+i;
        }
    }

    printf("%c", ans);

    return 0;
}