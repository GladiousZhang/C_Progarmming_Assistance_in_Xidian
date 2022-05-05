#include <bits/stdc++.h>
using namespace std;

int G[31][31];
int v[31];
int len;
int dot, edge, sum = 0;

int dfs(int i) {
	v[i] = 1;
	for (int j = 1; j <= dot; j++) {
		if (!v[j] && G[i][j]) {
			dfs(j);
			sum++;
		}
	}
	return sum;
}

int main() {
	scanf("%d%d", &dot, &edge);
	int a, b;
	for (int i = 1; i <= edge; i++) {
		scanf("%d%d", &a, &b);
		G[a][b] = 1;
		G[b][a] = 1;
	}
	int s = 0;
	for (int i = 1; i <= dot; i++) {
		if (!v[i]) {
			dfs(i);
			s++;
		}
	}
	printf("%d\n", s);
	for (int i = 1; i <= dot; i++) {
		v[i] = 0;
	}
	int cnt = 0;
	int rec[dot];
	for (int i = 1; i <= dot; i++) {
		if (!v[i]) {
			sum = 1;
			rec[cnt++] = dfs(i);
		}
	}
	sort(rec, rec + cnt);
	for (int i = 0; i < cnt ; i++) {
		printf("%d ", rec[i]);
	}
	return 0;
}