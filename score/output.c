#include "score.h"

// We will display results in two parts:
// Part 1 is just one row of marks
// Part 2 is a table of statistics

void output_results(int m[], int st[]) {
	int i;
	printf("Here are the marks: \n");
	for (i = 0; i < MAX && m[i] != -1; i++)
		if (m[i] != -2)
			printf("%4d", m[i]);
	puts(""); //make a new line
	printf("Here are the statistics: \n");
	printf("%5s%10s\n----------------\n", "Marks", "Hits");
	for (int i = 0; i < 6; i++)
		printf("%5d%10d\n", i, st[i]);
}
