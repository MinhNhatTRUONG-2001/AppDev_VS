#include "pascal.h"

int64_t fact(int n) {
	int64_t result = 1;
	for (int i = 1; i <= n; i++) {
		result *= i;
	}
	return result;
}