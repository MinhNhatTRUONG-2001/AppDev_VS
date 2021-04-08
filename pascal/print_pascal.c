#include "pascal.h"

void pascal_triangle(int v) {
	int i, j, k;
	int w = v;
	for (i = 0; i < v; i++) {
		// some spaces to start each line
		for (k = w; k > 1; k--) {
			printf("    ");
		}
		w--;
		for (j = 0; j <= i; j++) {
			printf("%8d", comb(i, j));
		}
		printf("\n");
	}
}