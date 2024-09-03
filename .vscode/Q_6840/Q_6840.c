// Who is in the middle?

#include <stdio.h>

int main(void) {
    int weight[3];
    int max;

    for(int i=0;i<=2;i++)
    {
        scanf("%d", &weight[i]);
    }

    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<2-i;j++)
        {
            if(weight[j] > weight[j+1])
            {
                max=weight[j];
                weight[j]=weight[j+1];
                weight[j+1]=max;
            }
        }
    }

    printf("%d\n", weight[1]);
    return 0;
}