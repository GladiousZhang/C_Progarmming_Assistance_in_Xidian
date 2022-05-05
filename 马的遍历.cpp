#include <bits/stdc++.h>
using namespace std;

int table[400][400], answer[400][400], m, n, row, column;
queue<int>q, q1;
int dx[8] = {2, -2, 2, -2, 1, 1, -1, -1};

int dy[8] = {1, 1, -1, -1, 2, -2, 2, -2};

int main() {
	scanf("%d %d %d %d", &m, &n, &row, &column);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			answer[i][j] = -1;
		}
	}
	row--;
	column--;
	q.push(row);
	q1.push(column);
	table[row][column] = 1;
	answer[row][column] = 0;
	while (!q.empty()) {
		for (int i = 0; i < 8; i++) {
			int target_x = dx[i] + q.front();
			int target_y = dy[i] + q1.front();
			if (target_x < m && target_x >= 0 && target_y < n && target_y >= 0 && table[target_x][target_y] != 1) {
				table[target_x][target_y] = 1;
				answer[target_x][target_y] = answer[q.front()][q1.front()] + 1;
				q.push(target_x);
				q1.push(target_y);
			}
		}
		q.pop();
		q1.pop();
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("%-5d", answer[i][j]);
		}
		printf("\n");
	}
	return 0;
}