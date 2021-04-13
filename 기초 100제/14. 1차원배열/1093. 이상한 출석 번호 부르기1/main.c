#include <stdio.h>

int main() {
	int n, cnt = 1;
	int arr[24] = {0};
	scanf("%d\n", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &cnt);
		arr[cnt]++;
	}
	for (int i = 1; i < 24; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}