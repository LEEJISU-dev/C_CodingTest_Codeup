#include <stdio.h>

int main() {
	int n;		// 거스름돈
	int cnt = 0;	// 최소 거스름돈의 개수
	int tmp = 0;
	int won[9] = {50000, 10000, 5000, 1000, 500, 100, 50, 10};	//화폐의 단위

	scanf("%d", &n);
	tmp = n;
	for (int i = 0; i < 8; i++) {
		if (tmp / won[i] != 0) {
			cnt += tmp / won[i];
			tmp = tmp % won[i];
		}
	}
	printf("%d", cnt);

	return 0;
}