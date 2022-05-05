#include <bits/stdc++.h>
using namespace std;

typedef struct edge {
	int x;
	int y;
	int key;
} edge;

int e[1000];

bool cmp(edge a, edge b) {
	return a.key < b.key;
}

int isCir(edge *s, int i) {
	if (e[s[i].x] && e[s[i].y]) {
		return 1;
	} else {
		e[s[i].x] = 1;
		e[s[i].y] = 1;
		return 0;
	}
}

int main() {
	int dot, num;
	scanf("%d%d", &dot, &num);
	edge s[num];
	for (int i = 0; i < num; i++) {
		scanf("%d%d%d", &s[i].x, &s[i].y, &s[i].key);
	}
	sort(s, s + num, cmp);
	deque<edge>d;
	for (int i = 0; i < num ; i++) {
		int sta = isCir(s, i);
		if (!sta) {
			d.push_back(s[i]);
		}
	}
	while (!d.empty()) {
		int a = d.front().x;
		int b = d.front().y;
		if (a > b) {
			int t = a;
			a = b;
			b = t;
		}
		printf("%d %d %d\n", a, b, d.front().key);
		d.pop_front();
	}
	return 0;
}