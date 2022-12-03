#include <stdio.h>

void main() {
	printf("Iteration program: ");
	
	int i, iterationCount = 0;
	for (i = 0; i < 10; i++) {
		iterationCount++;
		printf("%d ", iterationCount);
	}
}

