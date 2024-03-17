// 엄청난 부자 2 _ PYTHON으로 풀어야 함

#include <stdio.h>

int main(void)
{
    int n, m;

    scanf("%d %d", &n, &m);

    printf("%d\n%d\n", n/m, n%m);
    
    return 0;
}



/*
//PYTHON 코드 : 
n, m = map(int, input().split())
print(n // m)
print(n % m)
*/