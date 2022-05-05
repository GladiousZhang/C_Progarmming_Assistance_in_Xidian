#include <bits/stdc++.h>
using namespace std;

int main() {
	deque<int>exp;
	char s[10000];
	scanf("%s", s);
	int num;
	int res;
	for (int i = 0; s[i] != 0; i++) {
		if (s[i] >= '0' && s[i] <= '9')
			exp.push_back(s[i] - '0');
		else {
			char oper = s[i];
			num = exp.back();
			exp.pop_back();
			res = exp.back();
			exp.pop_back();
			switch (oper) {
				case '+':
					res = res + num;
					break;
				case '-':
					res = res - num;
					break;
				case '*':
					res = res * num;
					break;
				case '/':
					res = res / num;
					break;
			}
			exp.push_back(res);
		}
	}
	printf("%d", exp.back());
	return 0;
}