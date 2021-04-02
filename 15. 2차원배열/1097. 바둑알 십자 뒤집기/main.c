#include <stdio.h>

int main() {
	int n, x, y;
	int arr[20][20] = { (0,0) };
	for (int i = 1; i <= 19; i++) {
		for (int j = 1; j <= 19; j++) {
			// 바둑판 상황 입력받기
			scanf("%d", &arr[i][j]);
		}
	}
	// 좌표 개수 입력받기
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d %d", &x, &y);
		for (int j = 1; j <= 19; j++) {
			// 가로 흑/백 바꾸기
			if (arr[x][j] == 0) {
				arr[x][j] = 1;
			}
			else {
				arr[x][j] = 0;
			}
		}
		for (int j = 1; j <= 19; j++) {
			// 세로 흑/백 바꾸기
			if (arr[j][y] == 0) {
				arr[j][y] = 1;
			}
			else {
				arr[j][y] = 0;
			}
		}
	}
	for (int i = 1; i <= 19; i++) {
		for (int j = 1; j <= 19; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}