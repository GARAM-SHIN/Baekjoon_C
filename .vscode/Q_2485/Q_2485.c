// 가로수 : 균일하게 가로수를 심는 문제 _ F

#include <stdio.h>

int tree[100001];
int dis[100000];

int GCD(int a, int b);

int main(void)
{
    int N, min=0;
    int dis_gcd;

    scanf("%d", &N);

    for(int i=1;i<=N;i++)
    {
        scanf("%d", &tree[i]);
    }

    for(int i=1;i<N;i++)
    {
        dis[i]=tree[i+1]-tree[i];
    }

    dis_gcd=tree[2]-tree[1];
    
    for(int i=1;i<N;i++)
    {
        dis_gcd=GCD(dis_gcd, dis[i]);
    }

    for(int i=1;i<N;i++)
    {
        min=min+(dis[i]/dis_gcd)-1;
    }

    printf("%d\n", min);

    return 0;
}

int GCD(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    else return GCD(b, a%b);
}