// 소수 구하기 : 에라토스테네스의 체

#include <stdio.h>

int main() {
    int m, n;
    int arr[1000001];

    scanf("%d %d", &m, &n);
    
    for(int i = 2; i < 1000001; i++)
    {
        arr[i] = 1;
    }
    
    for(int i = 2; i <= n; i++)
    {
        for(int j = i * 2; j <= n; j+=i)
        {
            arr[j] = 0;
        }
    }
    
    for(int i = m; i <= n; i++)
    {
        if(arr[i] == 1)
        {
            printf("%d\n", i);
        }
    }
    
    return 0;
}