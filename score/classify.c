#include "score.h"

void classification(int m[], int st[]) {
	int i, c = 0;
	for (i = 0; i < MAX && m[i] != -1; i++) {
		switch (m[i]) {
		case 0: {st[0]++; c++; } break;
		case 1: {st[1]++; c++; } break;
		case 2: {st[2]++; c++; } break;
		case 3: {st[3]++; c++; } break;
		case 4: {st[4]++; c++; } break;
		case 5: {st[5]++; c++; } break;
		default: printf("Invalid mark! \n"); break;
		}
	}
	printf("%d marks are classified \n", c);
}
