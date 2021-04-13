#include <stdio.h>

int main() {
	char a, t='a';
	scanf("%c", &a);
	do {
		printf("%c ", t);
		t += 1;
	} while (t<a+1);

	return 0;
}