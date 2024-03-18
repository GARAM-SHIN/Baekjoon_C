// 럭비 클럽

#include <stdio.h>

int main(void)
{
    char name[11];
    int age, weight;

    scanf("%s %d %d", name, &age, &weight);

    while(name[0]!='#' && age!=0 && weight!=0)
    {
        if(age>17 || weight>=80)
        {
            printf("%s Senior\n", name);
        }
        else printf("%s Junior\n", name);

         scanf("%s %d %d", name, &age, &weight);
    }

    return 0;
}