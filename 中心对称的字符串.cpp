#include <bits/stdc++.h>

int main() {
	int n;
	scanf("%d", &n);
	char s[n + 1];
	scanf("%s", s);
	char *p = s;
	char *q = s + n - 1;
	int flag = 0;
	while (q >= p) {
		if (*q == *p) {
			q--;
			p++;
		} else {
			flag = 1;
			break;
		}
	}
	if (!flag) {
		printf("YES");
	} else {
		printf("NO");
	}
	return 0;
}