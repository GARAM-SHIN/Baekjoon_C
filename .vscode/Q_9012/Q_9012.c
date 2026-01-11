// 괄호

#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    char vps[51];
    int left = 0, right = 0;

    scanf("%d", &t);

    for(int i=0; i<t; i++)
    {
        scanf("%s", vps);

        for(int j=0; j<strlen(vps); j++)
        {
            if(vps[j] == '(')
                left++;
            else if(vps[j] == ')')
                right++;

            if(right > left) break;
        }
        if (left != right) printf("NO\n");
        else printf("YES\n");

        left = 0;
        right = 0;
    }

    return 0;
}