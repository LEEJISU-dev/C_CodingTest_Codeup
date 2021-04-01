#include <stdio.h>

int main() {
	int a,b;
	scanf("%d", &a);
reget:
	scanf("%d", &b);
	printf("%d\n", b);
	if(--a != 0){
		goto reget;
	}

	return 0;
}