#include <stdio.h>

int main() {
	int n, sum = 0;
	int i = 0;
	scanf("%d", &n);
	while (sum < n) {
		i++;
		sum += i;
	}
	printf("%d", i);

	return 0;
}