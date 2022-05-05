#include <stdio.h>
#include <string.h>

int main() {
	int s[3] = {0}, t, change;
	char ch[4] = {};
	scanf("%d %d %d", &s[0], &s[1], &s[2]);
	scanf("%s", ch);
	for (int i = 0, change = 1; i < 3 && change; i++) {
		change = 0;
		for (int j = 0; j < 2 - i; j++) {
			if (s[j] > s[j + 1]) {
				t = s[j];
				s[j] = s[j + 1];
				s[j + 1] = t;
				change = 1;
			}
		}
	}
	int min = s[0], ave = s[1], max = s[2];
	if (strcmp(ch, "CBA") == 0) {
		s[0] = max;
		s[1] = ave;
		s[2] = min;
	}
	if (strcmp(ch, "BAC") == 0) {
		s[0] = ave;
		s[1] = min;
		s[2] = max;
	}
	if (strcmp(ch, "ACB") == 0) {
		s[0] = min;
		s[1] = max;
		s[2] = ave;
	}
	if (strcmp(ch, "BCA") == 0) {
		s[0] = ave;
		s[1] = max;
		s[2] = min;
	}
	if (strcmp(ch, "CAB") == 0) {
		s[0] = max;
		s[1] = min;
		s[2] = ave;
	}
	printf("%d %d %d", s[0], s[1], s[2]);
	return 0;
}