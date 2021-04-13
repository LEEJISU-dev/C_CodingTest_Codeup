#include <stdio.h>

int main() {
	long long int a, b, c;
	float avg;
	scanf("%lld %lld %lld", &a, &b, &c);
	printf("%lld\n", a+b+c);
	avg = (float)(a + b + c) / 3;
	printf("%.1f\n", avg);
	return 0;
}