#include <stdio.h>

int main() {
	int arr[11][11] = { (0,0) };

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			scanf("%d",&arr[i][j]);
		}
	}
	int i = 1, j = 1;
	
	while (1) {
		// 현위치 0일 경우 : 왼쪽으로 한칸 이동 
		if (arr[i][j] == 0) {
			arr[i][j] = 9;
			j++;
		}
		// 다음 위치 1일 경우 : 다시 왼쪽(원위치), 아래로 한칸 이동
		if(arr[i][j] == 1){
			i++;
			j--;
		}
		// 2일 경우 : while문 빠져나가기
		if (arr[i][j] == 2) {
			arr[i][j] = 9;
			break;
		}
		// 오른쪽, 아래가 모두 1로 막혀있을 경우
		else if (arr[i][j + 1] == 1 && arr[i + 1][j] == 1) {
			// 현재 값이 0인 경우는 9로 바꾸기
			if (arr[i][j] == 0) {
				arr[i][j] = 9;
			}
			// while문 빠져나가기
			break;
		}
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}