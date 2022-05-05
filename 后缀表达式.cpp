#include <stdio.h>
#include <iostream>
#include <stack>
#include <math.h>
#include <string.h>
using namespace std;

int main() {
	stack<int>q;
	char s[1001] = {};
	scanf("%s", s);
	int times = 0, num = 0, first, second;
	for (int i = 0; i < 1001; i++) {
		//printf("%s %d %c\n", s, i, s[i]);
		if (s[i] == '.') {
			num = 0;
			times = 0;
			int j = i - 1;
			while (s[j] <= '9' && s[j] >= '0' && j >= 0) {
				num += (s[j] - '0') * pow(10, times);
				j--;
				times++;
			}
			q.push(num);
		}
		if (s[i] == '+') {
			second = q.top();
			q.pop();
			first = q.top();
			q.pop();
			q.push(first + second);
		}
		if (s[i] == '-') {
			second = q.top();
			q.pop();
			first = q.top();
			q.pop();
			q.push(first - second);
		}
		if (s[i] == '*') {
			second = q.top();
			q.pop();
			first = q.top();
			q.pop();
			q.push(first * second);
		}
		if (s[i] == '/') {
			second = q.top();
			q.pop();
			first = q.top();
			q.pop();
			q.push(first / second);
		}
		if (s[i] == '@') {
			break;
		}
	}
	printf("%d", q.top());
	return 0;
}