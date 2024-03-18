// 모음의 개수

#include <stdio.h>

int main(void)
{
    while(1)
    {
        int count=0;
        char str[256];

        scanf("%[^\n]s", str);
        getchar();

        if (str[0] == '#' && str[1] == '\0')
            break;

        for(int i=0;str[i]!='\0';i++)
        {
            if(str[i]=='a'||str[i]=='A')
            {
                count++;
            }
            else if(str[i]=='e'||str[i]=='E')
            {
                count++;
            }
            else if(str[i]=='i'||str[i]=='I')
            {
                count++;
            }
            else if(str[i]=='o'||str[i]=='O')
            {
                count++;
            }
            else if(str[i]=='u'||str[i]=='U')
            {
                count++;
            }
        }
        
        printf("%d\n", count);
    }

    return 0;
}