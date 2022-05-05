#include <bits/stdc++.h>
using namespace std;

int main() {
	int row, col;
	scanf("%d%d", &row, &col);
	int b1[row][col];
	int b2[row][col];
	int b[row][col];
	int flag1 = 0;
	int flag2 = 0;
	deque<int>v1;
	deque<int>v2;
	deque<int>v;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			scanf("%d", &b1[i][j]);
			if (b1[i][j] == 1) {
				flag1++;
			}
		}
	}
	int t1[flag1];
	for (int i = 0; i < flag1; i++) {
		scanf("%d", &t1[i]);
		v1.push_back(t1[i]);
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			scanf("%d", &b2[i][j]);
			if (b2[i][j] == 1) {
				flag2++;
			}
		}
	}
	int t2[flag2];
	for (int i = 0; i < flag2; i++) {
		scanf("%d", &t2[i]);
		v2.push_back(t2[i]);
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (b1[i][j] && b2[i][j]) {
				v.push_back(v1.front() + v2.front());
				v1.pop_front();
				v2.pop_front();
				if (!v.back()) {
					b[i][j] = 0;
					v.pop_back();
					continue;
				} else {
					b[i][j] = 1;
				}
			} else if (b1[i][j] && !b2[i][j]) {
				b[i][j] = 1;
				v.push_back(v1.front());
				v1.pop_front();
			} else if (!b1[i][j] && b2[i][j]) {
				b[i][j] = 1;
				v.push_back(v2.front());
				v2.pop_front();
			} else if (!b1[i][j] && !b2[i][j]) {
				b[i][j] = 0;
			}
		}
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	while (!v.empty()) {
		printf("%d ", v.front());
		v.pop_front();
	}
	return 0;
}