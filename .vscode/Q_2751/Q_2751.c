// 수 정렬하기 2

#include <stdio.h>
#include <stdlib.h>    //qsort 함수가 선언된 헤더 파일

#define max_size 1000001

int num[max_size] = {0,};

int compare(const void *a, const void *b)    // 오름차순 비교 함수 구현
{
    if(*(int *)a > *(int *)b)    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
        return 1;    // a가 b보다 클 때
    else if (*(int *)a < *(int *)b)   
        return -1;    // a가 b보다 작을 때
    else 
        return 0;    // a와 b가 같을 때는 0 반환
}

int main()
{
    int n;

    scanf("%d", &n);

    for (int i=0; i<n; i++)
    {
        scanf("%d", &num[i]);
    }

    qsort(num, n, sizeof(int), compare);    // 정렬할 배열, 요소 개수, 요소 크기, 비교 함수 입력

    for (int i=0; i<n; i++)
    {
        printf("%d\n", num[i]);
    }

    return 0;
}