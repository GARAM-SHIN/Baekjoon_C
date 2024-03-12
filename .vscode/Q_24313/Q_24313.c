// 알고리즘 수업 - 점근적 표기 1 : 시간 복잡도는 빅-O 표기법으로 표현할 수 있습니다.
// 정확한 정의보다는 "이 함수에 비례한다" 정도만 기억해도 무방합니다.

#include <stdio.h>

int main(void)
{
 int a1, a0;
 int c;
 int n0;

 scanf("%d %d %d %d", &a1, &a0, &c, &n0);

 if((a1*n0+a0<=c*n0) && (a1<=c))
 {
    printf("1\n");
 }
 else printf("0\n");

 return 0;
}