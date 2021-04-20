#include <stdio.h>

int main() {
	int x, y, z;
	int num;
	int result = 0;
	scanf("%d %d %d", &x, &y, &z);

	if (x >= y) {
		num = x;
	}
	else if (x >= z) {
		num = x;
	}
	else {
		num = x;
	}
	for (int i = 1; i <= num; i++) {
		if (x % i == 0 && y % i == 0 && z % i == 0) {
			result = i;
		}
	}
	
	printf("%d", result);

	return 0;
}