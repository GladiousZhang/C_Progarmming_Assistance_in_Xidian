#include <stdio.h>

int n, times = 0;
char rec[101][101];
char ch[8] = {"yizhong"};

int acc[101][101] = {};

void find_up(int i, int j) {
	if (rec[i ][j] == ch[times] && times < 7 && i < n && j < n && i >= 0 && j >= 0) {
		times++;
		find_up(i - 1, j);
	}
	i++;
	if (times == 7) {
		for (int k = 0; k < 7; k++) {
			acc[i + k][j] = 1;
		}
	}
	times = 0;
}

void find_ru(int i, int j) {
	if (rec[i][j] == ch[times] && times < 7 && i < n && j < n && i >= 0 && j >= 0) {
		times++;
		find_ru(i - 1, j + 1);
	}
	i++;
	j--;
	if (times == 7) {
		for (int k = 0; k < 7; k++) {
			acc[i + k][j - k] = 1;
		}
	}
	times = 0;
}

void find_right(int i, int j) {
	if (rec[i][j] == ch[times] && times < 7 && i < n && j < n && i >= 0 && j >= 0) {
		times++;
		find_right(i, j + 1);
	}
	j--;
	if (times == 7) {
		for (int k = 0; k < 7; k++) {
			acc[i][j - k] = 1;
		}
	}
	times = 0;
}

void find_rd(int i, int j) {
	if (rec[i][j] == ch[times] && times < 7 && i < n && j < n && i >= 0 && j >= 0) {
		times++;
		find_rd(i + 1, j + 1);
	}
	i--;
	j--;
	if (times == 7) {
		for (int k = 0; k < 7; k++) {
			acc[i - k][j - k] = 1;
		}
	}
	times = 0;
}

void find_down(int i, int j) {
	if (rec[i][j] == ch[times] && times < 7 && i < n && j < n && i >= 0 && j >= 0) {
		times++;
		find_down(i + 1, j);
	}
	i--;
	if (times == 7) {
		for (int k = 0; k < 7; k++) {
			acc[i - k][j] = 1;
		}
	}
	times = 0;
}

void find_ld(int i, int j) {
	if (rec[i][j] == ch[times] && times < 7 && i < n && j < n && i >= 0 && j >= 0) {
		times++;
		find_ld(i + 1, j - 1);
	}
	i--;
	j++;
	if (times == 7) {
		for (int k = 0; k < 7; k++) {
			acc[i - k][j + k] = 1;
		}
	}
	times = 0;
}

void find_left(int i, int j) {
	if (rec[i][j ] == ch[times] && times < 7 && i < n && j < n && i >= 0 && j >= 0) {
		times++;
		find_left(i, j - 1);
	}
	j++;
	if (times == 7) {
		for (int k = 0; k < 7; k++) {
			acc[i][j + k] = 1;
		}
	}
	times = 0;
}

void find_lu(int i, int j) {
	if (rec[i][j] == ch[times] && times < 7 && i < n && j < n && i >= 0 && j >= 0) {
		times++;
		find_lu(i - 1, j - 1);
	}
	i++;
	j++;
	if (times == 7) {
		for (int k = 0; k < 7; k++) {
			acc[i + k][j + k] = 1;
		}
	}
	times = 0;
}

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n ; i++) {
		scanf("%s", rec[i]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (rec[i][j] == 'y') {
				find_up(i, j);
				find_ru(i, j);
				find_right(i, j);
				find_rd(i, j);
				find_down(i, j);
				find_ld(i, j);
				find_left(i, j);
				find_lu(i, j);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (acc[i][j] == 1) {
				printf("%c", rec[i][j]);
			} else {
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}