// 팬들에게 둘러싸인 홍준

#include <stdio.h>

int main(void)
{
    char name[21];

    scanf("%s", name);

    printf(":fan::fan::fan:\n");
    printf(":fan::%s::fan:\n", name);
    printf(":fan::fan::fan:\n");

    return 0;
}