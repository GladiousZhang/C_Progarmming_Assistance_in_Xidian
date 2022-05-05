#include <iostream>
#include <stack>
using namespace std;
stack<int>q;

int main() {
	int times;
	cin >> times;
	for (int i = 0; i < times; i++) {
		int len, flag = 0;
		cin >> len;
		int a[len], b[len];
		for (int j = 0; j < len; j++) {
			cin >> a[j];
		}
		for (int j = 0; j < len; j++) {
			cin >> b[j];
		}
		for (int j = 0; j < len; j++) {
			q.push(a[j]);
			//printf("%d\n%d\n", q.top(), b[flag]);
			while ((q.top() ) == b[flag]) {
				q.pop(), flag++;
				if (q.empty()) {
					break;
				}
			}
		}
		if (q.empty()) {
			cout << "Yes" << endl;
		}
		if (!q.empty()) {
			cout << "No" << endl;
		}
		for (int j = len - 1; j >= 0; j--) {
			if (!q.empty()) {
				q.pop();
			}
		}
	}
	return 0;
}