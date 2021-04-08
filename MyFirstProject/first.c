
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b;
	printf("Please enter 2 positive numbers: ");
	scanf("%d%d", &a, &b);
	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}
	for (int i = a, c = 0; i <= b; i++) {
		if (i % 3 == 0) {
			printf("%6d", i);
			c++;
			if (c % 5 == 0) printf("\n");
		}
	}
}