#include <bits/stdc++.h>
using namespace std;

int main() {
	int len, div;
	scanf("%d%d", &len, &div);
	int hash[len];
	for (int i = 0; i < len; i++) {
		hash[i] = -1;
	}
	deque<int>res;
	int num;
	int flag = 0;
	int flag1 = 0;
	while (1) {
		scanf("%d", &num);
		if (num == -1) {
			break;
		}
		int plc = num % div;
		while (plc < len) {
			if (hash[plc] == num) {
				flag = 1;
				break;
			}
			if (hash[plc] == -1) {
				break;
			}
			plc++;
		}
		if (flag) {
			res.push_back(plc);
		} else {
			int totl = 0;
			for (int i = 0; i < len; i++) {
				if (hash[i] != -1) {
					totl++;
				}
			}
			if (totl == len - 1) {
				flag1 = 1;
				break;
			} else {
				res.push_back(plc);
				hash[plc] = num;
			}
		}
		flag = 0;
	}

	while (!res.empty()) {
		printf("%d\n", res.front());
		res.pop_front();
	}

	if (flag1) {
		printf("Table full");
	}
	return 0;
}