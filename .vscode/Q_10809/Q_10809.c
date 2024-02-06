// 알파벳 찾기 : 한 단어에서 각 알파벳이 처음 등장하는 위치를 찾는 문제 _ F

#include <stdio.h>
#include <string.h>

int main(void)
{
    char S[101];
    char alpha[26]={0,};

    scanf("%s", S);

    for(int i=0;i<strlen(S);i++)
    {
        if(alpha[S[i]-'a']==0)
        {
            alpha[S[i]-'a']=i+1;
        }
    }

    for(int i=0;i<26;i++)
    {
        if(alpha[i]==0)
        {
            printf("-1 ");
        }
        else printf("%d ", alpha[i]-1);
    }
    return 0;
}