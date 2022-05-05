#include <stdio.h>
#include <iostream>
#include <list>
#include <string.h>
#include <stack>
using namespace std;

int main() {
	list<char>l;
	stack<char>q;
	char s[100] = {};
	scanf("%s", s);
	int len = strlen(s);
	for (int i = 0; i < len; i++) {
		l.push_back(s[i]);
	}

	return 0;
}