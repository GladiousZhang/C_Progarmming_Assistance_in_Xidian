#include <bits/stdc++.h>

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	int s1[a];
	int s2[b];
	int *p = s1;
	int *q = s2;
	for (int i = 0; i < a; i++) {
		scanf("%d", p++);
	}
	for (int i = 0; i < b; i++) {
		scanf("%d", q++);
	}
	p = s1;
	q = s2;
	int flag1 = 0, flag2 = 0;
	while (flag1 < a && flag2 < b) {
		if (*p == *q) {
			printf("%d ", *p);
			p++;
			flag1++;
			q++;
			flag2++;
		} else if (*p < *q) {
			printf("%d ", *p);
			p++;
			flag1++;
		} else if (*p > *q) {
			printf("%d ", *q);
			q++;
			flag2++;
		}
	}
	if (flag1 == a  && flag2 != b ) {
		while (flag2 != b) {
			printf("%d ", *q);
			q++;
			flag2++;
		}
	} else if (flag2 == b  && !flag1 != a) {
		while (flag1 != a) {
			printf("%d ", *p);
			p++;
			flag1++;
		}
	}
	return 0;
}