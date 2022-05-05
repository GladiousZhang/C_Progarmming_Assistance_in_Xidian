#include <bits/stdc++.h>
using namespace std;

int main() {
	int m, n;
	deque<int>res;
	int cases;
	while (1) {
		scanf("%d%d", &m, &n);
		if (!(m || n)) {
			break;
		}
		int sta = m, end = m;
		int flag = 1;
		int line1, line2;
		for (line1 = 0; n > pow(2, line1); line1++);
		while (1) {
			sta = sta * 2;
			end = end * 2 + 1;
			flag++;
			for (line2 = 0; sta > pow(2, line2); line2++);
			if (line1 == line2 && sta <= n && end >= n) {
				cases = 1;
				break;
			}
			if (line1 == line2 && n < sta) {
				cases = 2;
				break;
			}
			if (line1 == line2 && n > end) {
				cases = 3;
				break;
			}
		}
		switch (cases) {
			case 1: {
				int sum = 0;
				for (int i = 0; i < flag - 1; i++) {
					sum += pow(2, i);
				}
				sum += n - sta + 1;
				res.push_back(sum);
				break;
			}
			case 2: {
				int sum = 0;
				for (int i = 0; i < flag - 1; i++) {
					sum += pow(2, i);
				}
				res.push_back(sum);
				break;
			}
			case 3: {
				int sum = 0;
				for (int i = 0; i < flag; i++) {
					sum += pow(2, i);
				}
				res.push_back(sum);
				break;
			}
		}
	}
	while (!res.empty()) {
		printf("%d\n", res.front());
		res.pop_front();
	}
	return 0;
}