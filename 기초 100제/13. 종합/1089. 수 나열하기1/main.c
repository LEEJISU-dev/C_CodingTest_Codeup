#include <stdio.h>

int main() {
	int a, d, n;
	int result;
	scanf("%d %d %d",&a, &d, &n);
	result = a;
	for (int i = 1; i < n; i ++) {
		result += d;
	}
	printf("%d", result);

	return 0;
}