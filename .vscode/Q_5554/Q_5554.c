// 심부름 가는 길

#include <stdio.h>

int main(void) {
    int school, pc, ac, home;
    int sum=0;

    scanf("%d %d %d %d", &school, &pc, &ac, &home);

    sum=school+pc+ac+home;

    printf("%d\n%d\n", (sum/60), (sum%60));

    return 0;
}