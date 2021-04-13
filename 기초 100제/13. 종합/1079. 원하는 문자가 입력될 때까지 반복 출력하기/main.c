#include <stdio.h>

int main() {
	char a;

	do {
		scanf("%c ", &a);
		printf("%c\n", a);
	} while ('q' != a);

	return 0;
}