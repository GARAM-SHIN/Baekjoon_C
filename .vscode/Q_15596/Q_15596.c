// 정수 N개의 합

#include <stdio.h>

#define max_size 1000001

long long sum(int *a, int n)
{
    long long result = 0;

    for (int i=0; i<n; i++)
    {
        result += a[i];
    }

    return result;
}