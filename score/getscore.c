#include "score.h"

//define input_scores()

void input_scores(int s[]) {
	// get user's input using a sentinel-controlled loop
	int i, input = 0;
	printf("Enter scores, -1 to end: \n");
	for (i = 0; i < MAX && input != -1; ) {
		scanf("%d", &input);
		if ((input >= 0 && input <= 100) || input == -1) {
			s[i] = input;
			i++;
		}
		else printf("Invalid marks! Please write again \n");
	}
	printf("%d scores are given \n", i - 1);
}
