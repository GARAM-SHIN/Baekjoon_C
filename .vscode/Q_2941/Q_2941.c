// 크로아티아 알파벳 : 두세 문자가 한 글자로 묶일 수 있을 때 글자의 수를 세는 문제 _ F

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[101];
    int count=0, i=0;

    scanf("%s", str);

    while (i < strlen(str)) {
		if (str[i] == 'c') {
			if (str[i + 1] == '=')
				i++;
			else if (str[i + 1] == '-')
				i++;
		}
		else if (str[i] == 'd') {
			if (str[i + 1] == '-')
				i++;
			else if (str[i + 1] == 'z' && str[i + 2] == '=')
				i += 2;
		}
		else if (str[i] == 'l') {
			if (str[i + 1] == 'j')
				i++;
		}
		else if (str[i] == 'n') {
			if (str[i + 1] == 'j')
				i++;
		}
		else if (str[i] == 's') {
			if (str[i + 1] == '=')
				i++;
		}
		else if (str[i] == 'z') {
			if (str[i + 1] == '=')
				i++;
		}

		count++;
		i++;
	}

    printf("%d\n", count);

    return 0;
}