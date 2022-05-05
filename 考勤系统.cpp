#include <stdio.h>
#include <math.h>

typedef struct a {
	int name;
	char come[6];
	char go[6];
	int time = 0;
} rec;

typedef struct {
	int num;
	int tot;
} sort;

int timelen(char come[], char go[]) {
	int cmt = 0, got = 0;
	for (int i = 0; come[i] != 0; i++) {
		if (i < 2) {
			cmt += come[i] * pow(10, (1 - i)) * 60;
		}
		if (i > 2) {
			cmt += come[i] * pow(10, (4 - i));
		}
	}
	for (int i = 0; go[i] != 0; i++) {
		if (i < 2) {
			got += go[i] * pow(10, (1 - i)) * 60;
		}
		if (i > 2) {
			got += go[i] * pow(10, (4 - i));
		}
	}
	return abs(got - cmt);
}

int main() {
	int a, flag = 0, change;
	scanf("%d", &a);
	rec s[a];
	int b[101] = {};
	for (int i = 0; i < a; i++) {
		scanf("%d %s %s", &s[i].name, &s[i].come, &s[i].go);
	}
	for (int i = 0; i < a; i++) {
		s[i].time = timelen(s[i].come, s[i].go);
		b[s[i].name] += s[i].time;
	}
	for (int i = 0; i < 101; i++) {
		if (b[i] != 0) {
			flag++;
		}
	}
	a = 0;
	sort d[flag], t;
	for (int i = 0; i < flag; i++) {
		while (a < 101) {
			if (b[a] != 0) {
				d[i].num = a;
				d[i].tot = b[a];
				a++;
				break;
			}
			a++;
		}
	}
	for (int i = 0, change = 1; i < flag && change; i++) {
		change = 0;
		for (int j = 0; j < flag - i - 1; j++) {
			if (d[j].tot < d[j + 1].tot) {
				t = d[j];
				d[j] = d[j + 1];
				d[j + 1] = t;
				change = 1;
			}
		}
	}
	for (int i = 0; i < flag; i++) {
		printf("%d %d\n", d[i].num, d[i].tot);
	}
	return 0;
}