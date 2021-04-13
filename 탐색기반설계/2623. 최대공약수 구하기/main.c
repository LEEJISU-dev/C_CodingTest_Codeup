#include <stdio.h>

int main() {
	int a, b;
	int gcd = 0;
	scanf("%d %d", &a, &b);

	if (a < b) {
		gcd = a;
	}
	else {
		gcd = b;
	}

	for (int i = gcd; i >0; i--) {
		if (a % i == 0 && b % i == 0) {
			gcd = i;
			break;
		}
	}
	printf("%d", gcd);

	return 0;
}