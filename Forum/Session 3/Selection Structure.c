#include <stdio.h>

void main() {
	printf("Calculate Final Grade for College Student \n");
	
	int finalScore = 98;
	char grade;
	if (finalScore >= 95) {
		grade = 'A';
	} else if (finalScore >= 85) {
		grade = 'B';
	} else {
		grade = 'C';
	}
	
	printf("Final grade for this student: %c", grade);
}

