#include <bits/stdc++.h>
using namespace std;

int main() {
	deque<int>exp;
	char s[10000];
	gets(s);
	int len = strlen(s);
	int num;
	int res;
	for (int i = len - 1; i >= 0; i--) {
		if (s[i] >= '0' && s[i] <= '9') {
			int flag = 0;
			int sum = 0;
			while (s[i] != ' ') {
				sum += (s[i] - '0') * pow(10, flag);
				i--;
				flag++;
			}
			exp.push_back(sum);
		} else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
			char oper = s[i];
			res = exp.back();
			exp.pop_back();
			num = exp.back();
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
}