#include <stdio.h>
#include <iostream>
#include <string.h>
#include <math.h>

int main() {
	int dim;
	scanf("%d", &dim);
	int brick[dim][dim];
	for (int i = 0; i < dim; i++) {
		for (int j = 0; j < dim; j++) {
			if (i == (dim - 1)) {
				brick[i][j] = j;
			} else {
				brick[i][j] = -1;
			}
		}
	}
	int from, to, rec, flag = 0;
	char cond1[100] = {}, cond2[100] = {};
	while (1) {
		scanf("%s", cond1);
		if (strcmp(cond1, "quit") == 0) {
			break;
		} else {
			scanf("%d %s %d", &from, cond2, &to);
		}
		if (strcmp(cond1, "move") == 0) {
			for (int i = 0; i < dim && !flag; i++) {
				for (int j = 0; j < dim && !flag; j++) {
					if (brick[i][j] == from) {
						for (rec = i - 1; rec >= 0 && !flag; rec--) {
							if (brick[rec][j] != -1) {
								int place = brick[rec][j];
								brick[dim - 1][place] = place;
							} else {
								flag = 1;
							}
						}
					}
				}
			}
			flag = 0;
			if (strcmp(cond2, "onto") == 0) {

			} else if (strcmp(cond2, "over") == 0) {

			}
		} else if (strcmp(cond1, "pile") == 0) {
			if (strcmp(cond2, "onto") == 0) {

			} else if (strcmp(cond2, "over") == 0) {

			}
		}
	}
	for (int j = 0; j < dim; j++) {
		printf("%d: ", j);
		for (int i = 0; i < dim; i++) {
			printf("%d", brick[i][j]);
		}
		printf("\n");
	}
	return 0;
}