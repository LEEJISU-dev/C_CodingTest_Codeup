#include <stdio.h>

int main() {
	int n;	// 화단 둘레의 길이
	int cnt = 0;	// 만들수 있는 화단의 갯수

	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			for (int k = j; k <= n; k++) {
				if (i <= j && j<=k && 
					i + j > k && i + j + k == n) {
					cnt++;
				}
			}
		}
	}

	printf("%d", cnt);

	return 0;
}