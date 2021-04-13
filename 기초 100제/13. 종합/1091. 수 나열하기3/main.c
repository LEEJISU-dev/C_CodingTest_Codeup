#include <stdio.h>

int main() {
	long long int a, m, d, n;
	long long int result;
	scanf("%lld %lld %lld %lld",&a, &m, &d, &n);
	result = a;
	for (int i = 1; i < n; i++) {
		result = result * m + d;
	}
	printf("%lld", result);

	return 0;
}