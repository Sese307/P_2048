#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include "array_print.h"
#include "move_array.h"
#include "init_array.h"

void random_create_2(int array_2048[4][4]) {
	int count = 0, r1, l1, r2 = -1, l2 = -1;
	srand(time(0));

	while (1) {
		r1 = rand() % 4;
		l1 = rand() % 4;
		if (2 == count)
			break;
		if (r1 == r2 && l1 == l2)
			continue;
		if (0 == array_2048[r1][l1]) {
			array_2048[r1][l1] = 2;
			count++;
			r2 = r1;
			l2 = l1;
		}
		else
			continue;
	}
}

void main() {
	int array_2048[4][4] = { 0 };
	char user_input;
	int i, j, success = 0;
	init_array(array_2048);
	array_print(array_2048);

	while (1) {
		scanf("%c", &user_input);
		
		switch (user_input)
		{
		case 'w':
		{
			move_up(array_2048);
			random_create_2(array_2048);
			array_print(array_2048);
			break;
		}
		case 'a':
		{
			move_left(array_2048);
			random_create_2(array_2048);
			array_print(array_2048);
			break;
		}
		case 's':
		{
			move_down(array_2048);
			random_create_2(array_2048);
			array_print(array_2048);
			break;
		}
		case 'd':
		{
			move_right(array_2048);
			random_create_2(array_2048);
			array_print(array_2048);
			break;
		}
		default:
			break;
		}
		for (i = 0; i < 4; i++) {
			for (j = 0; j < 4; j++) {
				if (2048 == array_2048[i][j]) {
					success = 1;
					break;
				}
			}
			if (success)
				break;
		}
		if (success) {
			printf("Successful!!!\n");
			break;
		}
	}
}
