#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;				// 토핑 종류 수
	int dprice, tprice;	// 도우 가격, 토핑 가격
	int dkcal;				// 도우 칼로리
	int tkcal[100] = { 0 };	// 토핑 칼로리

	scanf("%d", &n);	// 토핑 종류 수
	scanf("%d %d", &dprice, &tprice);	// 도우 가격, 토핑 가격
	scanf("%d", &dkcal);	// 도우 칼로리
	for (int i = 0; i < n; i++) {
		scanf("%d", &tkcal[i]);	// 토핑 칼로리

		// 토핑 칼로리 정렬
		int j = i;
		while (j != 0 && tkcal[j] > tkcal[j - 1]) {
			int tmp = tkcal[j - 1];
			tkcal[j - 1] = tkcal[j];
			tkcal[j] = tmp;
			j--;
		}
	}
	
	int price = dprice;	// 총 가격
	int kcal = dkcal;	// 총 칼로리
	int bestPizza = kcal / price;	// 최고의 피자

	for (int i = 0; i < n; i++) {
		if (bestPizza < tkcal[i] / tprice) {
			kcal += tkcal[i];
			price += tprice;
			bestPizza = kcal / price;
		}
	}
	printf("%d", bestPizza);

	return 0;
}