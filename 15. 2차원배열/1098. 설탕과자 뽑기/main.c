#include <stdio.h>

int main() {
	int h, w, n, l, d, x, y;
	int arr[20][20] = { (0,0) };
	scanf("%d %d", &h, &w);	// 가로, 세로
	scanf("%d", &n);	// 놓을 수 있는 막대 개수
	for (int i = 1; i <= n; i++) {
		scanf("%d %d %d %d", &l, &d, &x, &y);
		if (d == 0) {
			for (int a = 0; a < l; a++) {
				arr[x][y + a] = 1;
			}
		}
		else {
			for (int a = 0; a < l; a++) {
				arr[x + a][y] = 1;
			}
		}	
	}

	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}