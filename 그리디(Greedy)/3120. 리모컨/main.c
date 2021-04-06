#include <stdio.h>

int main() {
	int a, b;	// 현재 온도 a, 목표 온도 b
	int cnt = 0;	// 버튼 누름의 최소 횟수

	scanf("%d %d", &a, &b);
	
	int tmp = abs(a - b) % 10;	// 10으로 나눈 나머지값
	cnt += abs(a - b) / 10;		// +-10 버튼 사용 횟수 더하기	

	if (tmp == 9 || tmp == 8) {
		cnt += 1 + (10 - tmp);
	}
	else if (tmp >= 4 && tmp < 8) {
		cnt += 1 + abs(5 - tmp);
	}
	else if (tmp >= 1 && tmp < 4) {
		cnt += tmp;
	}
	
	printf("%d", cnt);

	return 0;
}