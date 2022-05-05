#include <bits/stdc++.h>

int main() {
	int n;
	scanf("%d", &n);
	int s[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &s[i]);
	}
	int pos[n - 1];
	for (int i = 0; i < n - 1; i++) {
		pos[i] = -1;
	}
	int i = 0;
	int flag = 100000;
	int con = 0;
	while (i < n && con == 0) {
		int j = i + 1;
		while (j < n) {
			if (s[i] > s[j]) {
				pos[s[j]] = j;
			}
			j++;
		}
		for (int k = 0; k < n - 1 && con == 0; k++) {
			if (pos[k] != -1 && pos[k] < flag) {
				flag = pos[k];
			} else if (pos[k] != -1 && pos[k] > flag) {
				con = 1;
			}
		}
		for (int k = 0; k < n - 1; k++) {
			pos[k] = -1;
		}
		i++;
		flag = 100000;
	}
	if (con == 0) {
		printf("yes");
	} else {
		printf("no");
	}
	return 0;
}