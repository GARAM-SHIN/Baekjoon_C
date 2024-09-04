// 정보보호학부 동아리 소개

#include <stdio.h>

int main(void) {
    char name;

    scanf("%c", &name);

    if(name=='M') printf("MatKor\n");
    else if(name=='W') printf("WiCys\n");
    else if(name=='C') printf("CyKor\n");
    else if(name=='A') printf("AlKor\n");
    else printf("$clear\n");

    return 0;
}