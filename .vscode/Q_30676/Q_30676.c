// 이 별은 무슨 색일까

#include <stdio.h>

int main(void)
{
    int wave;

    scanf("%d", &wave);

    if(wave>=620 && wave <=780)
    {
        printf("Red\n");
    }
    else if(wave>=590 && wave <620)
    {
        printf("Orange\n");
    }
    else if(wave>=570 && wave <590)
    {
        printf("Yellow\n");
    }
    else if(wave>=495 && wave <570)
    {
        printf("Green\n");
    }
    else if(wave>=450 && wave <495)
    {
        printf("Blue\n");
    }
    else if(wave>=425 && wave <450)
    {
        printf("Indigo\n");
    }
    else if(wave>=380 && wave <425)
    {
        printf("Violet\n");
    }

    return 0;
}