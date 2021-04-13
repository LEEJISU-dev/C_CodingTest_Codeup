#include <stdio.h>

int main() {
	long long int a, r, n;
	long long int result;
	scanf("%lld %lld %lld",&a, &r, &n);
	result = a;
	for (int i = 1; i < n; i++) {
		result *= r;
	}
	printf("%lld", result);

	return 0;
}