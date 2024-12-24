// 사과

#include <stdio.h>

int main(void)
{
    int N;
    int stud, apple;
    int sum=0;

    scanf("%d", &N);

    for(int i=0;i<N;i++)
    {
        scanf("%d %d", &stud, &apple);

       if(stud<apple) sum+=apple%stud;
       else if(stud>apple) sum+=apple;
    }

    printf("%d", sum);

    return 0;
}