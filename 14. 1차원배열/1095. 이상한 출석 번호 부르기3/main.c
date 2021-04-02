#include <stdio.h>

int main() {
	int n, min = 10000;
	int arr[10000] = {0};
	scanf("%d\n", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	printf("%d", min);

	return 0;
}