// 벌집 : 벌집이 형성되는 규칙에 따라 벌집의 위치를 구하는 문제

#include <stdio.h>

int main(void)
{
    int num;
    int count=2, dis=2, rep=5;

    scanf("%d", &num);

    while(1)
    {
         if(num==1)
         {
            printf("1\n");
            break;
         }

        else if((dis<=num)&&(dis+rep>=num))
        {
            printf("%d\n", count);
            break;
        }

        dis+=rep+1;
        rep+=6;
        count++;
    }

    return 0;
}