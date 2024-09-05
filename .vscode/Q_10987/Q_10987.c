// 모음의 개수

#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	int count = 0;

	scanf("%s", str);

	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
			count++;
	}

	printf("%d\n", count);

    return 0;
}