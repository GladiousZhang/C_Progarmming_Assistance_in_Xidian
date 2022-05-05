#include <bits/stdc++.h>

int len(int *s, int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] > 0)
			sum++;
	}
	return sum;
}

int main() {
	int n;
	scanf("%d", &n);
	int s[n];
	for (int i = 0; i < n; i++) {
		s[i] = i + 1;
	}
	int div;
	int flag = 0;
	while (len(s, n) > 3) {
		int cnt = 0;
		if (flag % 2 == 0)
			div = 2;
		else
			div = 3;
		for (int i = 0; i < n; i++) {
			if (s[i] != -1) {
				cnt++;
				if (cnt % div == 0) {
					s[i] = -1;
				}
			}
		}
		flag++;
	}
	for (int i = 0; i < n; i++) {
		if (s[i] != -1) {
			printf("%d ", s[i]);
		}
	}
	return 0;
}