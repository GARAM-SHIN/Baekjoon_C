// 그룹 단어 체커 : 조건에 맞는 문자열을 찾는 문제 _ F

#include <stdio.h>

int main(void)
{
    int N;
    int ret=0;
    int k, pass;
    int alpha[26]={0,};
    char str[101];

    scanf("%d", &N);

    for(int i=0;i<N;i++)
    {
        scanf("%s", str);

        for(int j=0;j<26;j++)
        {
            alpha[j]=0;
        }

        k=1;
        pass=1;

        while(str[k])
        {
            if(alpha[str[k]-'a'])
            {
                pass=0;
                break;
            }

            if(str[k]!=str[k-1])
            {
                ++alpha[str[k-1]-'a'];
            }
            ++k;
        }
        ret+=pass;
    }

    printf("%d\n", ret);
    return 0;
}