#include <stdio.h>

int n, r;
int row[21], column[21];

void output() {
	for (int i = 0; i < r; i++) {
		printf("%3d", row[i]);
	}
	printf("\n");
}

void permu(int i) {
	if (i >= r) {
		output();
	}
	for (int j = 1; j <= n; j++) {
		if (!column[j] && i < r && (!i || j > row[i - 1])) {
			row[i] = j;
			column[j] = 1;
			permu(i + 1);
			column[j] = 0;
		}
	}
}

int main() {
	scanf("%d %d", &n, &r);
	permu(0);
	return 0;
}