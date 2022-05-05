#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	if (T == 1) {
		printf("I love Luogu!");
	} else if (T == 2) {
		printf("%d %d", 2 + 4, 10 - 2 - 4);
	} else if (T == 3) {
		printf("%d\n%d\n%d", 14 / 4, 14 / 4 * 4, 14 % 4);
	} else if (T == 4) {
		printf("%6.3f", 500 / 3.0);
	} else if (T == 5) {
		printf("%d", (260 + 220) / (20 + 12));
	} else if (T == 6) {
		cout << sqrt(6 * 6 + 9 * 9);
	} else if (T == 7) {
		printf("%d\n%d\n%d\n", 100 + 10, 100 + 10 - 20, 0);
	} else if (T == 8) {
		cout << 2 * 3.141593 * 5 << endl;
		cout << 3.141593 * 5 * 5 << endl;
		cout << 4 / 3.0 * 3.141593 * 5 * 5 * 5 << endl;
	} else if (T == 9) {
		printf("%d", (((1 + 1) * 2 + 1) * 2 + 1) * 2) ;
	} else if (T == 10) {
		printf("9");
	} else if (T == 11) {
		cout << 100 / (8.0 - 5.0);
	} else if (T == 12) {
		int num, i = 1;
		char ch1, ch2 = 'A';
		while (ch2 < 'Z') {
			if (ch2 == 'M') {
				num = i;
			}
			if (i == 18) {
				ch1 = ch2;
			}
			i++;
			ch2++;
		}
		printf("%d\n%c", num, ch1);
	} else if (T == 13) {
		printf("%.0f", pow(4 / 3.0 * (4 * 4 * 4 + 10 * 10 * 10) * 3.141593, 1 / 3.0));
	} else if (T == 14) {
		printf("%.0f", (120 - sqrt(120 * 120 - 4 * 3500)) / 2);
	}
	return 0;
}
