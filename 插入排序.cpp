#include <bits/stdc++.h>

int main() {
	int n;
	scanf("%d", &n);
	int s[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &s[i]);
	}
	int flag = 0;
	for (int i = 1; i < n; i++) {
		int temp = s[i];
		for (int j = i - 1; j >= 0; j--) {
			if (s[j] > temp && j != 0) {
				s[j + 1] = s[j];
			} else if (s[j] > temp && j == 0) {
				s[j + 1] = s[j];
				s[j] = temp;
				break;
			} else {
				s[j + 1] = temp;
				break;
			}
		}
		if (flag < 3) {
			for (int i = 0; i < n; i++) {
				printf("%d ", s[i]);
			}
			flag++;
			printf("\n");
		} else {
			break;
		}
	}
	return 0;
}