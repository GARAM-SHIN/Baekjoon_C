// 생장점

#include <stdio.h>

int main(void)
{
    int a=0;
    int leaf, cut, result = 0;

    scanf("%d", &a);

    while(a)
    {
        scanf("%d %d",&leaf, &cut);
        
        result=leaf-cut;

        for(int i=1;i<a;i++)
        {
            scanf("%d %d", &leaf, &cut);
            result=result*leaf-cut;
        }
        printf("%d\n", result);
        scanf("%d", &a);
    }

    return 0;
}