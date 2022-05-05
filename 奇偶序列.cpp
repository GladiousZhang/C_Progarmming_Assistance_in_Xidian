#include <bits/stdc++.h>

int main() {
	int n;
	scanf("%d", &n);
	int s[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &s[i]);
	}
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {

			printf("%d ", s[i]);
		}
	}
	for (int i = 0; i < n; i++) {
		if (i % 2 != 0) {
			printf("%d ", s[i]);
		}
	}
	return 0;
}