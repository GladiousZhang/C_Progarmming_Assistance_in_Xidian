#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int range, devision, num = 0, sum = 0;
	cin >> range;
	cin >> devision;
	for (int i = 1; i <= range; i++) {
		if (i % devision == 0) {
			sum += i;
			num++;
		}
	}
	printf("%.1f %.1f", (1.0 * sum ) / num, (((1 + range)*range) / 2 - sum) / (1.0 * (range - num)));
	return 0;
}