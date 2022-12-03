#include <stdio.h>

void main() {
	printf("Calculate freshmen score");
	
	int test = 100;
	int attendence = 95;
	int finalScore = (test * 70/100) + (attendence * 30/100);
	
	printf("Final score: %d", finalScore);
}

