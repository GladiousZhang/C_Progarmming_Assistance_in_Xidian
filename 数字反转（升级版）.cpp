#include <stdio.h>
#include <string.h>

int main() {
	char s[22] = {};
	scanf("%s", s);
	int len = strlen(s), flag = 0;
	char final[len + 1] = {};
	int kind = 0, conse = -1, j = 0, k = 0;
	for (int i = 0; i < len && s[i]; i++) {
		if (s[i] == '.') {
			kind = 1;
			conse = i;
			break;
		}
		if (s[i] == '/') {
			kind = 2;
			conse = i;
			break;
		}
		if (s[i] == '%') {
			kind = 3;
			conse = i;
			break;
		}
	}
	switch (kind) {
		case 0:
			for (int i = 0; i < len; i++) {
				if (s[len - flag - 1] == '0') {
					flag++;
				} else {
					final[j] = s[len - i - 1];
					j++;
				}
			}
			if (flag == len) {
				final[0] = '0';
			}
			flag = 0;
			break;
		case 1:
			//printf("%d", conse);
			for (int i = 0; i < conse; i++) {
				if (s[conse - flag - 1] == '0') {
					flag++;
				} else {
					final[j] = s[conse - i - 1];
					j++;
				}
			}
			if (s[0] == '0') {
				final[0] = '0';
				flag = 0;
			}
			j = 0;
			final[conse - flag] = '.';
			for (int i = 0; len - i - 1 > conse; i++) {
				final[conse - flag + 1 + i] = s[len - i - 1];
			}
			for (int i = len - flag; i > conse - flag; i--) {
				if (final[len - flag - j - 1] == '0') {
					final[len - flag - j - 1] = 0;
					j++;
				}
			}
			if (final[conse - flag + 1] == 0) {
				final[conse - flag + 1] = '0';
			}
			flag = 0;
			break;
		case 2:
			for (int i = 0; i < conse; i++) {
				if (s[conse - flag - 1] == '0') {
					flag++;
				} else {
					final[j] = s[conse - i - 1];
					j++;
				}
			}
			if (s[0] == '0') {
				final[0] = '0';
				flag = 0;
			}
			j = 0;
			final[conse - flag] = '/';
			for (int i = 0; len - i - 1 > conse; i++) {
				if (s[len - j - 1] == '0') {
					j++;
				} else {
					final[conse - flag + 1 + k] = s[len - i - 1];
					k++;
				}
			}

			flag = 0;
			break;
		case 3:
			for (int i = 0; i < conse; i++) {
				if (s[len - flag - 2] == '0') {
					flag++;
				} else {
					final[j] = s[len - i - 2];
					j++;
				}
			}
			if (s[0] == '0') {
				final[0] = '0';
				flag = 0;
			}
			final[len - flag - 1] = '%';
			flag = 0;
			break;
	}
	printf("%s", final);
	return 0;
}