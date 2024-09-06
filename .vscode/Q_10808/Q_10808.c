// 알파벳 개수

#include <stdio.h>
#include <string.h>

int main(void) {
    char S[100];
    char alpha[26]={0,};

    scanf("%s", S);

   for(int i=0;i<strlen(S);i++)
   {
    for(int j=0;j<26;j++)
    {
        if(S[i]-'a'==j)
        {
            alpha[j]++;
        }
    }
   }

   for(int i=0;i<26;i++)
   {
    printf("%d ", alpha[i]);
   }

   printf("\n");

   return 0;
}