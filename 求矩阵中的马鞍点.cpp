#include <bits/stdc++.h>

int main() {
	int flag = 0;
	int row, col;
	scanf("%d %d", &row, &col);
	int s[row][col];
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			scanf("%d", &s[i][j]);
		}
	}
	int r[row];
	int flag1 = 0;
	for (int i = 0; i < row; i++) {
		r[i] = s[i][0];
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (r[i] > s[i][j]) {
				r[i] = s[i][j];
			}
		}
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (r[i] == s[i][j]) {
				for (int k = 0; k < row; k++) {
					if (s[k][j] > r[i]) {
						flag1++;
						break;
					}
				}
				if (!flag1) {
					printf("%d %d %d\n", i + 1, j + 1, s[i][j]);
					flag++;
				}
				flag1 = 0;
			}
		}
	}
	if (!flag) {
		printf("NO");
	}
	return 0;
}