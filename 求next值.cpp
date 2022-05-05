#include <bits/stdc++.h>

int main() {
	int n;
	int flag = 0;
	scanf("%d", &n);
	char s[n + 1];
	for (int i = 0; i < n; i++) {
		scanf(" %c", &s[i]);
	}
	int next[n];
	int i = 0, j = -1;
	next[0] = -1;
	while (i < n - 1) {
		if (j == -1 || s[i] == s[j])
			next[++i] = ++j;
		else
			j = next[j];
	}
	for (int i = 0; i < n; i++)
		printf("%d ", next[i]);
	return 0;
}