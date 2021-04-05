#include <stdio.h>

int main() {
	int a[4] = { 0 };
	int b[3] = { 0 };
	int min1 = 2000, min2 = 2000;
	double set = 0;

	for (int i = 0; i < 3; i++) {
		scanf("%d", &a[i]);
		if (a[i] < min1) {
			min1 = a[i];
		}
	}
	for (int i = 0; i < 2; i++) {
		scanf("%d", &b[i]);
		if (b[i] < min2) {
			min2 = b[i];
		}
	}
	set = (double)(min1 + min2) * 0.1 + (min1 + min2);
	printf("%.1lf", set);

	return 0;
}