// 홀수

#include <stdio.h>

int main() {
	int arr[7], sum = 0, min = 100;
	for (int i = 0; i < 7; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 7; i++) {
		if (arr[i] % 2 == 1) {
			sum += arr[i];
			if (arr[i] < min) min = arr[i];
		}
	}

	if (sum == 0) {
		printf("-1");
		return 0;
	}
	else {
		printf("%d\n%d", sum, min);
		return 0;
	}
}