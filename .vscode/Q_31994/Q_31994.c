// 강당 대관

#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[7][20];
    int people[7];
    char maxName[20];
    int max=-100;

    for(int i=0;i<7;i++)
    {
        scanf("%s %d", name[i], &people[i]);

        if(people[i]>max)
        {
            max=people[i];
            strcpy(maxName, name[i]);
        }
    }

    printf("%s\n", maxName);

    return 0;
}