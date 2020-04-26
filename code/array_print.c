#include <stdio.h>

void array_print(int array_2048[4][4]) {
	int i = 0, j = 0;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d  ", array_2048[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}