#include <bits/stdc++.h>
using namespace std;

int main() {
	char s[10000] = {0};
	gets(s);
	stack<char>brct;
	int flag = 0;
	for (int i = 0; s[i] != 0 && !flag; i++) {
		if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
			brct.push(s[i]);
		} else if (s[i] == ')') {
			if (!brct.empty() && brct.top() == '(') {
				brct.pop();
			} else {
				flag++;
				break;
			}
		} else if (s[i] == ']') {
			if (!brct.empty() && brct.top() == '[') {
				brct.pop();
			} else {
				flag++;
				break;
			}
		} else if (s[i] == '}') {
			if (!brct.empty() && brct.top() == '{') {
				brct.pop();
			} else {
				flag++;
				break;
			}
		}
	}
	if (!brct.empty() || flag)
		printf("wrong");
	else
		printf("right");
	return 0;
}