#include<stdio.h>
#include<math.h>

int main() {
	int x1, y1, r1, x2, y2, r2;
	int T, i;
	double d;
	scanf_s("%d", &T);

	for (i = 0; i < T; i++) {
		scanf_s("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		d = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
		d = sqrt(d);

		if (x1 == x2 && y1 == y2 && r1 == r2) printf("-1\n");

		else if (r1 + r2 > d) {
			if (r1 >= r2 && r1 - r2 < d) printf("%d\n", 2);
			else if (r1 >= r2 && r1 - r2 == d) printf("%d\n", 1);
			else if (r2 > r1 && r2 - r1 < d) printf("%d\n", 2);
			else if (r2 > r1 && r2 - r1 == d) printf("%d\n", 1);
			else printf("%d\n", 0);
		}
 
		else if (r1 + r2 < d) printf("0\n");
		else if (r1 > r2 && r1 - r2 > d) printf("%0\n");
		else if (r2 > r1 && r2 - r1 > d) printf("%0\n");
		else printf("1\n");

	}

	return 0;
}