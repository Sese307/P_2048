#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void init_array(int array_2048[4][4]) {
	int i, r1,l1, r2 = -1, l2 = -1;
	srand(time(0));
	for (i = 0; i < 2; i++) {
		r1 = rand() % 4;
		l1 = rand() % 4;
		if ((r1 == r2) && (l1 == l2)) {
			if (3 == l1)
				l1 -= 1;
			else
				l1 += 1;
		}
		array_2048[r1][l1] = 2;
		r2 = r1;
		l2 = l1;
	}
}