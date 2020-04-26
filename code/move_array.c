#include <stdio.h>

void move_down(int array_2048[4][4]) {
	int i, j, count;
	for (i = 0; i < 4; i++) {
		count = 0;
		for (j = 3; j >= 0; j--) {
			if (0 == array_2048[j][i]) {
				continue;
			}
			else {
				array_2048[3 - count][i] = array_2048[j][i];
				if (3-count != j)
					array_2048[j][i] = 0;
				count++;
			}
		}
	
		if (2 == count && array_2048[3][i] == array_2048[2][i]) {
			array_2048[3][i] = 2 * array_2048[3][i];
			array_2048[2][i] = 0;
			continue;
		}
		else if (3 == count) {
			if (array_2048[3][i] == array_2048[2][i]) {
				array_2048[3][i] = 2 * array_2048[3][i];
				array_2048[2][i] = array_2048[1][i];
				array_2048[1][i] = 0;
				continue;
			}
			else if (array_2048[2][i] == array_2048[1][i]) {
				array_2048[2][i] = 2 * array_2048[2][i];
				array_2048[1][i] = 0;
				continue;
			}
			else
				continue;
		}
		else if (4 == count) {
			if (array_2048[3][i] == array_2048[2][i]) {
				array_2048[3][i] = 2 * array_2048[3][i];
				array_2048[2][i] = array_2048[1][i];
				array_2048[1][i] = array_2048[0][i];
				array_2048[0][i] = 0;
				if (array_2048[2][i] == array_2048[1][i]) {
					array_2048[2][i] = 2 * array_2048[2][i];
					array_2048[1][i] = 0;
					continue;
				}
				else
					continue;
			}
			else if (array_2048[2][i] == array_2048[1][i]) {
				array_2048[2][i] = 2 * array_2048[2][i];
				array_2048[1][i] = array_2048[0][i];
				array_2048[0][i] = 0;
				continue;
			}
			else if (array_2048[1][i] == array_2048[0][i]) {
				array_2048[1][i] = 2 * array_2048[1][i];
				array_2048[0][i] = 0;
			}
			else
				continue;
		}
		else
			continue;
	}
	
}

void move_up(int array_2048[4][4]) {
	int i, j, count;
	for (i = 0; i < 4; i++) {
		count = 0;
		for (j = 0; j < 4; j++) {
			if (0 == array_2048[j][i]) {
				continue;
			}
			else {
				array_2048[count][i] = array_2048[j][i];
				if (count != j)
					array_2048[j][i] = 0;
				count++;
			}
		}

		if (2 == count && array_2048[0][i] == array_2048[1][i]) {
			array_2048[0][i] = 2 * array_2048[0][i];
			array_2048[1][i] = 0;
			continue;
		}
		else if (3 == count) {
			if (array_2048[0][i] == array_2048[1][i]) {
				array_2048[0][i] = 2 * array_2048[0][i];
				array_2048[1][i] = array_2048[2][i];
				array_2048[2][i] = 0;
				continue;
			}
			else if (array_2048[1][i] == array_2048[2][i]) {
				array_2048[1][i] = 2 * array_2048[1][i];
				array_2048[2][i] = 0;
				continue;
			}
			else
				continue;
		}
		else if (4 == count) {
			if (array_2048[0][i] == array_2048[1][i]) {
				array_2048[0][i] = 2 * array_2048[0][i];
				array_2048[1][i] = array_2048[2][i];
				array_2048[2][i] = array_2048[3][i];
				array_2048[3][i] = 0;
				if (array_2048[1][i] == array_2048[2][i]) {
					array_2048[1][i] = 2 * array_2048[1][i];
					array_2048[2][i] = 0;
					continue;
				}
				else
					continue;
			}
			else if (array_2048[1][i] == array_2048[2][i]) {
				array_2048[1][i] = 2 * array_2048[1][i];
				array_2048[2][i] = array_2048[3][i];
				array_2048[3][i] = 0;
				continue;
			}
			else if (array_2048[2][i] == array_2048[3][i]) {
				array_2048[2][i] = 2 * array_2048[2][i];
				array_2048[3][i] = 0;
			}
			else
				continue;
		}
		else
			continue;
	}

}

void move_left(int array_2048[4][4]) {
	int i, j, count;
	for (i = 0; i < 4; i++) {
		count = 0;
		for (j = 0; j < 4; j++) {
			if (0 == array_2048[i][j]) {
				continue;
			}
			else {
				array_2048[i][count] = array_2048[i][j];
				if (count != j)
					array_2048[i][j] = 0;
				count++;
			}
		}

		if (2 == count && array_2048[i][0] == array_2048[i][1]) {
			array_2048[i][0] = 2 * array_2048[i][0];
			array_2048[i][1] = 0;
			continue;
		}
		else if (3 == count) {
			if (array_2048[i][0] == array_2048[i][1]) {
				array_2048[i][0] = 2 * array_2048[i][0];
				array_2048[i][1] = array_2048[i][2];
				array_2048[i][2] = 0;
				/*if (array_2048[i][0] == array_2048[i][1]) {
					array_2048[i][0] = 2 * array_2048[i][0];
					array_2048[i][1] = 0;
				}
				else*/
				continue;
			}
			else if (array_2048[i][1] == array_2048[i][2]) {
				array_2048[i][1] = 2 * array_2048[i][1];
				array_2048[i][2] = 0;
				continue;
			}
			else
				continue;
		}
		else if (4 == count) {
			if (array_2048[i][0] == array_2048[i][1]) {
				array_2048[i][0] = 2 * array_2048[i][0];
				array_2048[i][1] = array_2048[i][2];
				array_2048[i][2] = array_2048[i][3];
				array_2048[i][3] = 0;
				if (array_2048[i][1] == array_2048[i][2]) {
					array_2048[i][1] = 2 * array_2048[i][2];
					array_2048[i][2] = 0;
					continue;
				}
				/*if (array_2048[i][0] == array_2048[i][1]) {
					array_2048[i][0] = 2 * array_2048[i][0];
					array_2048[i][1] = array_2048[i][2];
					array_2048[i][2] = 0;
					if (array_2048[i][0] == array_2048[i][1]) {
						array_2048[i][0] = 2 * array_2048[i][0];
						array_2048[i][1] = 0;
					}*/
				else
					continue;
			}
			else if (array_2048[i][1] == array_2048[i][2]) {
					array_2048[i][1] = 2 * array_2048[i][1];
					array_2048[i][2] = array_2048[i][3];
					array_2048[i][3] = 0;
					continue;
			}
			else if (array_2048[i][2] == array_2048[i][3]) {
				array_2048[i][2] = 2 * array_2048[i][2];
				array_2048[i][3] = 0;
			}
			else
				continue;
		}
		else
			continue;
	}
}

void move_right(int array_2048[4][4]) {
	int i, j, count;
	for (i = 0; i < 4; i++) {
		count = 0;
		for (j = 3; j >= 0; j--) {
			if (0 == array_2048[i][j]) {
				continue;
			}
			else {
				array_2048[i][3 - count] = array_2048[i][j];
				if ((3 - count) != j)
					array_2048[i][j] = 0;
				count++;
			}
		}

		if (2 == count && array_2048[i][3] == array_2048[i][2]) {
			array_2048[i][3] = 2 * array_2048[i][3];
			array_2048[i][2] = 0;
			continue;
		}
		else if (3 == count) {
			if (array_2048[i][3] == array_2048[i][2]) {
				array_2048[i][3] = 2 * array_2048[i][3];
				array_2048[i][2] = array_2048[i][1];
				array_2048[i][1] = 0;
				/*if (array_2048[i][3] == array_2048[i][2]) {
					array_2048[i][3] = 2 * array_2048[i][3];
					array_2048[i][2] = 0;
				}
				else*/
				continue;
			}
			else if (array_2048[i][2] == array_2048[i][1]) {
				array_2048[i][2] = 2 * array_2048[i][2];
				array_2048[i][1] = 0;
				continue;
			}
			else
				continue;
		}
		else if (4 == count) {
			if (array_2048[i][3] == array_2048[i][2]) {
				array_2048[i][3] = 2 * array_2048[i][3];
				array_2048[i][2] = array_2048[i][1];
				array_2048[i][1] = array_2048[i][0];
				array_2048[i][0] = 0;
				if (array_2048[i][2] == array_2048[i][1]) {
					array_2048[i][2] = 2 * array_2048[i][1];
					array_2048[i][1] = 0;
					continue;
				}
				/*if (array_2048[i][3] == array_2048[i][2]) {
					array_2048[i][3] = 2 * array_2048[i][3];
					array_2048[i][2] = array_2048[i][1];
					array_2048[i][1] = 0;
					if (array_2048[i][3] == array_2048[i][2]) {
						array_2048[i][3] = 2 * array_2048[i][3];
						array_2048[i][2] = 0;
					}*/
				else
					continue;
			}
			else if (array_2048[i][2] == array_2048[i][1]) {
				array_2048[i][2] = 2 * array_2048[i][2];
				array_2048[i][1] = array_2048[i][0];
				array_2048[i][0] = 0;
				continue;
			}
			else if (array_2048[i][1] == array_2048[i][0]) {
				array_2048[i][1] = 2 * array_2048[i][1];
				array_2048[i][0] = 0;
				continue;
			}
			else
				continue;
		}
		else
			continue;
	}

}