#include <stdio.h>

int main() {
	int n, sum = 0, cnt=1;
	scanf("%d", &n);
	while(1) {
		sum += cnt;
		if (sum >= n) {
			break;
		}
		cnt++;
	}
	printf("%d", sum);

	return 0;
}